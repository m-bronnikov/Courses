#include <vector>
//#include <string>
#include <iostream>

using namespace std;

void print_vector(const vector<int>& vec){
    for(int n : vec){
        cout << "|" << n << "|";
    }
    cout << endl;
}

int main(){
    vector<int> days = {31, 28, 31, 30, 31};
    if(true){
        ++days[1];
    }
    print_vector(days);
    vector<bool> holydays(28, false);
    holydays[22] = true;
    holydays.assign(31, true);
    holydays.clear();
    days.resize(30);
    print_vector(days);
    return 0;
}