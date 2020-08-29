#include <iostream>
#include <string>


bool IsPalindrom(std::string s){
    for(int i = 0, j = s.size() - 1; i < s.size(); ++i, --j){
        if(s[i] != s[j]){
            return false;
        }
    }
    return true;
}