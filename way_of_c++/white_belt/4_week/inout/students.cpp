#include <fstream>
#include <string>
#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;

struct student
{
    string name;
    string second;
    int day;
    int month;
    int year;
};

istream& operator>>(istream& is, student& s){
    is >> s.name >> s.second >> s.day >> s.month >> s.year;
    return is;
}

void make_request(ostream& os, const string& str, const vector<student>& vec, int num){
    if(num-- > 0 && num < vec.size()){
        auto& s = vec[num];
        if(str == "name"){
            os << s.name << " " << s.second << endl;
            return;
        }else if(str == "date"){
            os << s.day << "." << s.month << "." << s.year << endl;
            return;
        }
    }
    os << "bad request" << endl;
}


int main(){
    int N, M;
    cin >> N;

    vector<student> listof(N);

    for(auto& st : listof){
        cin >> st;
    }

    cin >> M;

    for(int i = 0; i < M; ++i){
        string request;
        int num;
        cin >> request >> num;
        make_request(cout, request, listof, num);
    }
    
    return 0;
}