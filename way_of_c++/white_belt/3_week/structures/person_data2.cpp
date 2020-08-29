#include <string>
#include <map>
#include <algorithm>
#include <vector>

using namespace std;

class Person {
public:
    void ChangeFirstName(int year, const string& first_name) {
        first_hist[year] = first_name;
    }
  
    void ChangeLastName(int year, const string& last_name) {
        last_hist[year] = last_name;
    }
    
    string GetFullName(int year) {
        string ans;
        auto it = first_hist.upper_bound(year);
        auto jt = last_hist.upper_bound(year);

        if(it == first_hist.begin()){
            if(jt == last_hist.begin()){
                ans = "Incognito";
            }else{
                --jt;
                ans = jt->second + " with unknown first name";
            }
        }else if(jt == last_hist.begin()){
            --it;
            ans = it->second + " with unknown last name";
        }else{
            --it;
            --jt;
            ans = it->second + " " + jt->second;
        }
        return ans;
    }


    string GetFullNameWithHistory(int year){
        string ans = "";
        bool first_name = false;

        vector<string> names;
        for(auto& it : first_hist){
            if(it.first > year){
                break;
            }

            if(!names.size() || names.back() != it.second){
                names.push_back(it.second);
            }
        }
        
        if(names.size()){
            ans = names.back() + " ";
            names.pop_back();
            first_name = true;
        }

        if(names.size()){
            ans += "(" + names.back();
            names.pop_back();
            while(names.size()){
                ans += ", " + names.back();
                names.pop_back();
            }
            ans += ") ";
        }

        for(auto& it : last_hist){
            if(it.first > year){
                break;
            }
            if(!names.size() || names.back() != it.second){
                names.push_back(it.second);
            }
        }

        if(!names.size()){
            if(first_name){
                ans += "with unknown last name";
            }else{
                ans = "Incognito";
            }
            return ans;
        }

        ans += names.back();
        names.pop_back();

        if(names.size()){
            ans += " (" + names.back();
            names.pop_back();
            while(names.size()){
                ans += ", " + names.back();
                names.pop_back();
            }
            ans += ")";
        }

        if(!first_name){
            ans += " with unknown first name";
        }

        return ans;
    }

private:
    map<int, string> first_hist;
    map<int, string> last_hist;

};