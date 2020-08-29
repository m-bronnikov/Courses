#include <iostream>
#include <string>
#include <vector>

using namespace std;


bool IsPalindrom(string s){
    for(int i = 0, j = s.size() - 1; i < s.size(); ++i, --j){
        if(s[i] != s[j]){
            return false;
        }
    }
    return true;
}

vector<string> PalindromFilter(vector<string> words, int minLength){
    vector<string> ans;
    for(auto w : words){
        if(w.size() >= minLength && IsPalindrom(w)){
            ans.push_back(w);
        }
    }
    return ans;
}