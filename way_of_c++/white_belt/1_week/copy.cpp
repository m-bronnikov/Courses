#include <iostream>
#include <string>

using namespace std;


int main(){
    string s = "Hello";
    string t = std::move(s);

    t += " World!";

    t[0] = 'h';

    cout << s << endl;
    cout << t << endl;


    return 0;
}