#include <iostream>
#include <vector>
#include <string>


using namespace std;

void PrintWords(vector<string> vec){
    for(auto str : vec){
        cout << str << " ";
    }
    cout << endl;
}

void int_change(int a){
    a = 42;
}

int main(){
    int b = 5;
    vector<string> vec = {"anfd", "gjnfsd", "fsknf", "dog", "jfklsjf"};

    PrintWords(vec);
    int_change(b);

    cout << "Int: " << b << endl;

    return 0;
}