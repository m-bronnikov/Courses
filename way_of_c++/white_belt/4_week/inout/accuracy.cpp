#include <fstream>
#include <string>
#include <iostream>

using namespace std;

int main(){
    string str;
    ifstream fin("hello.txt");
    if(!fin){
        cout << "Error" << endl;
    }
    while(getline(fin, str)){
        cout << str << endl;
    }
    return 0;
}