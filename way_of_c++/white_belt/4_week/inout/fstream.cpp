#include <fstream>
#include <string>
#include <iostream>

using namespace std;

int main(){
    string str;
    ifstream fin("hello.txt");
    while(getline(fin, str)){
        cout << str << endl;
    }
    return 0;
}