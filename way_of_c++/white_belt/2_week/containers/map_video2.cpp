#include <iostream>
#include <map>
#include <string>
#include <vector>

using namespace std;

void PrintMap(const map<int, string>& m){
    cout << "Size: " << m.size() << endl;
    for(const auto& it : m){
        cout << it.first << " : " << it.second << endl;
    }
}

void PrintMap(const map<string, int>& m){
    cout << "Size: " << m.size() << endl;
    for(const auto& it : m){
        cout << it.first << " : " << it.second << endl;
    }
}



int main(){
    int n;
    // all keys sorted
    map<string, int> events = {{"one", 1}, {"two", 2}, {"three", 3}};
    PrintMap(events);
    events.erase("three");
    PrintMap(events);

    vector<string> words = {"one", "two", "one"};

    map<string, int> counter;
    for(const string& word : words){
        // call to unused key creates new obj
        ++counter[word];
    }

    PrintMap(counter);

    return 0;
}