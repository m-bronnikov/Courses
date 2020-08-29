#include <iostream>
#include <set>
#include <string>
#include <vector>

using namespace std;

class SortedStrings {
public:
    void AddString(const string& s) {
        storage.insert(s);
    }

    vector<string> GetSortedStrings() {
        vector<string> ans;
        ans.reserve(storage.size());
        for(const auto& s : storage){
            ans.push_back(s);
        }
        return ans;
    }
private:
    multiset<string> storage;
};