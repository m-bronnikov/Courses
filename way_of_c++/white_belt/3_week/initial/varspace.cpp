#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main(){
    string s = "Hello";
    {
        string s = "world!";
        cout << s;
    }
    cout << s << endl;
    return 0;
}