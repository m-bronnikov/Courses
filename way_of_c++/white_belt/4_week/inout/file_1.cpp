#include <fstream>
#include <string>
#include <iostream>

using namespace std;

int main(){
    const string path = "input.txt";
    string str;
    ifstream fin("input.txt");
    while(getline(fin, str)){
        cout << str << endl;
    }
    return 0;
}