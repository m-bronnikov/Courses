#include <fstream>
#include <string>
#include <iostream>

using namespace std;

int main(){
    const string path1 = "input.txt";
    const string path2 = "output.txt";

    string str;

    ifstream fin(path1);
    ofstream fout(path2);

    while(getline(fin, str)){
        fout << str << endl;
    }
    
    return 0;
}
