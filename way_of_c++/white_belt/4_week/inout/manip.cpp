#include <fstream>
#include <string>
#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

int main(){
    vector<double> nums = {3, 0.1, 0.00001};
    vector<string> strs = {"Max", "Abdulah", "Roman"};

    cout << fixed << setprecision(2);

    for(const auto& num : nums){
        cout << setw(10) << num << " ";
    }

    cout << endl;

    for(const auto& name : strs){
        cout << setw(10) << name << " ";
    }

    cout << endl;
    
    return 0;
}