#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

template<typename T>
ostream& operator<<(ostream& os, const vector<T>& vec){
    for(auto i : vec){
        os << "|" << i << "|";
    }
    return os;
}

int main(){
    string s = "lskjfklvb;sd";

    for(char c : s){
        cout << c << ", ";
    }
    cout << endl;
    
    vector<int> nums = {1, 4, 2, 5, 1, 0, 6};

    for(auto i : nums){
        cout << i << ", ";
    }
    cout << endl;

    vector<string> strs = {"fsvs", "adasf", "ffg", "j", ""};

    sort(strs.begin(), strs.end());

    for(auto str: strs){
        cout << str << endl;
    }

    int counter = 0;

    for (auto i : nums){
        if(i == 1){
            ++counter;
        }
    }
    cout << "Count: " << counter << endl;

    cout << "Count: " << count(nums.begin(), nums.end(), 1);
    cout << endl;

    cout << nums << endl;

    return 0;
}