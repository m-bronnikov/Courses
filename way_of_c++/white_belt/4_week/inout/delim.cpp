#include <fstream>
#include <string>
#include <iostream>

using namespace std;

int main(){
    int year, day, mounth;
    ifstream fin("hello.txt");
    if(!fin){
        cout << "Error" << endl;
    }
    while(fin){
        fin >> day;
        fin.ignore(1);
        fin >> mounth;
        fin.ignore(1);
        fin >> year;
        fin.ignore(1);

        cout << year << "/" << mounth << "/" << day << endl;
    }
    return 0;
}