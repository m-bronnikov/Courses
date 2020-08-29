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
    int x = 4;
    string a = "dlkfjnpjfdsbvjskldbkjlsfdbpk";
    vector<int> vec = {1, 3, 2, 9, 4};
    cout << a << " " << x << endl;
    cout << vec << endl;

    int y;
    cout << "Write x and y: ";
    cin >> x >> y;

    cout << x + y << endl;

    cout << "Write your name: ";
    cin >> a;
    cout << "Hello " << a << "!" << endl;

    return 0;
}
