#include <iostream>
#include <string>

using namespace std;

int main(){
    int a = 4; 
    int b = 1;

    cout << (a == b) << endl;

    cout << (a > b) << endl;

    string y = "abc";
    string x = "abc";

    cout << (x == y && a > b) << endl;

    cout << (a == b || (b = 4)) << endl;

    cout << b << endl;

    return 0;
}
