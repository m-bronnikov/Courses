#include <iostream>
#include <vector>

using namespace std;


void add(vector<vector<string>>& cal, int i, string& s){
    cal[i - 1].emplace_back(std::move(s));
}

void dump(const vector<vector<string>>& cal, int i){
    const vector<string>& day = cal[i - 1];
    cout << day.size();
    for(const string& s : day){
        cout << " " << s;
    }
    cout << endl;
}

int main(){
    const int mounts = 12;
    const vector<int> days = {31, 28, 31, 
                        30, 31, 30, 31,
                        31, 30, 31, 30, 31};

    int now = 0;
    vector<vector<string>> calendar(days[now]);

    int n;
    cin >> n;

    for(int i = 0; i < n; ++i){
        string operation;
        cin >> operation;
        if(operation == "ADD"){
            int num;
            string s;
            cin >> num >> s;
            add(calendar, num, s);
        }else if(operation == "DUMP"){
            int num;
            cin >> num;
            dump(calendar, num);
        }else{
            // next mounth num:
            ++now;
            if(now == mounts){
                now = 0;
            }
            // add last deals to end
            if(calendar.size() > days[now]){
                for(int j = days[now]; j < calendar.size(); ++j){
                    calendar[days[now] - 1].insert(
                        end(calendar[days[now] - 1]), 
                        begin(calendar[j]), 
                        end(calendar[j])
                    );
                }
            }
            // resize:
            calendar.resize(days[now]);
        }
    }
}