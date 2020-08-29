#include <iostream>
#include <map>
#include <string>

using namespace std;

void PrintMap(const map<int, string>& m){
    cout << "Size: " << m.size() << endl;
    for(auto it : m){
        cout << it.first << " : " << it.second << endl;
    }
}

void PrintMap(const map<string, int>& m){
    cout << "Size: " << m.size() << endl;
    for(auto it : m){
        cout << it.first << " : " << it.second << endl;
    }
}

map<string, int> ReverseMap(const map<int, string>& m){
    map<string, int> ans;

    for(auto it : m){
        ans[it.second] = it.first;
    }

    return ans;
}


int main(){
    int n;
    // all keys sorted
    map<int, string> events;

    events[1950] = "Stroustrup BDay";
    events[1941] = "Richie BDay";
    events[1970] = "Unix epoch";

    string s = events[0];

    cout << s << endl;

    PrintMap(events);

    cout << events[1950] << endl;

    events.erase(1970);

    PrintMap(events);

    map<string, int> reversed = ReverseMap(events);

    PrintMap(reversed);

    cout << reversed["Stroustrup BDay"] << endl;

    return 0;
}