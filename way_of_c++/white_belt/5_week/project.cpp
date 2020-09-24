#include <iostream>
#include <stdexcept>
#include <string>
#include <map>
#include <set>
#include <iomanip>

using namespace std;


class Date{
public:

    Date(const string& data){
        istringstream str(data);
        str >> (*this);
    }

    Date(){}

    void init_string(const string& data){
        istringstream str(data);
        str >> (*this);

        if(!str.eof()){
            throw domain_error("");
        }
    }

    friend istream& operator>>(istream& is, Date& d){
        is >> d.year;
        if(is.peek() == '-'){
            is.ignore(1);
        }else{
            throw domain_error("");
        }

        is >> d.month;
        if(is.peek() == '-'){
            is.ignore(1);
        }else{
            throw domain_error("");
        }
        is >> d.day;
        
        if(!is){
            throw domain_error("");
        }
        if(!d.check_month()){
            throw invalid_argument("Month value is invalid: " + 
                                                    to_string(d.month));
        }
        if(!d.check_day()){
            throw invalid_argument("Day value is invalid: " + 
                                                    to_string(d.day));
        }

        return is;
    }

    friend ostream& operator<<(ostream& os, const  Date& d){
        os << setfill('0') << setw(4);
        os << d.year << "-";
        os << setfill('0') << setw(2);
        os << d.month << "-";
        os << setfill('0') << setw(2);
        os << d.day;
        return os;
    }

    friend bool operator<(const Date& lft, const Date& rht){
        if(lft.year == rht.year){
            if(lft.month == rht.month){
                return lft.day < rht.day;
            }
            return lft.month < rht.month;
        }
        return lft.year < rht.year;
    }

    bool check_month() const{
        return (month >= 1 && month <= 12);
    }


    bool check_day() const{
        return (day >= 1 && day <= 31);
    }

private:
    int year;
    int month;
    int day;
};



typedef map<Date, set<string>> Storage;



class StorageDialog{
public:
    StorageDialog(Storage& dbase, istream& in, ostream& out) : 
    database(dbase), is(in), os(out){}

    void start(){
        string cmd;

        while(getline(is, cmd)){
            if(cmd != ""){
                istringstream strm(cmd);
                do_cmd(strm);
            }
        }
    }

    void do_cmd(istringstream& cmd) {
        string operation;
        cmd >> operation;

        if(operation == "Print"){
            print_storage();
        }

        else if(operation == "Del"){
            string first, second;
            Date key;
            cmd >> first;
            try{
                key.init_string(first);
            }catch(domain_error& err){
                throw invalid_argument("Wrong date format: " + first);
            }

            cmd >> second;
            if(!cmd){
                erase_date_all(key);
            }else{
                erase_date_val(key, second);
            }
        }

        else if(operation == "Add"){
            string first, second;
            Date key;
            cmd >> first;
            try{
                key.init_string(first);
            }catch(domain_error& err){
                throw invalid_argument("Wrong date format: " + first);
            }

            cmd >> second;
            add_date_val(key, second);
        }

        else if(operation == "Find"){
            string first;
            Date key;
            cmd >> first;

            try{
                key.init_string(first);
            }catch(domain_error& err){
                throw invalid_argument("Wrong date format: " + first);
            }
    
            find_key(key);
        }else{
            throw invalid_argument("Unknown command: " + operation);
        }
    }

    void add_date_val(const Date& key, const string& str){
        database[key].insert(str);
    }

    void find_key(const Date& key){
        if(!database.count(key)){
            return;
        }
        
        for(const auto& event : database[key]){
            os << event << endl;
        }
    }

    void erase_date_all(const Date& key){
        int N = 0;

        if(database.count(key)){
            N = database[key].size();

            database.erase(key);
        }

        os << "Deleted " << N << " events" << endl;
    }

    void erase_date_val(const Date& key, const string& val){
        if(database.count(key) && database[key].count(val)){
            database[key].erase(val);
            os << "Deleted successfully" << endl;
        }else{
            os << "Event not found" << endl;
        }
    }

    void print_storage(){
        for(const auto& [key, val] : database){
            for(const auto& event : val){
                os << key << " " << event << endl;
            }
        }
    }

private:
    Storage& database;
    istream& is;
    ostream& os;
};




int main(){
    Storage calendar;
    StorageDialog dlg(calendar, cin, cout);

    try{
        dlg.start();
    }catch(invalid_argument& err){
        cout << err.what() << endl;
    }

    return 0;
}