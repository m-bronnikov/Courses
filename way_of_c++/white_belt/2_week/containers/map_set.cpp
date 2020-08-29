#include <iostream>
#include <string>
#include <set>
#include <map>


using namespace std;

set<string> BuildMapValuesSet(const map<int, string>& m) {
    set<string> ans;
    for(const auto& [key, value] : m){
        ans.insert(value);
    }
    return ans;
}