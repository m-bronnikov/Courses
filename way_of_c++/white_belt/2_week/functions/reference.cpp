#include <iostream>
#include <vector>
#include <string>


using namespace std;

void PrintWords(vector<string>& vec){
    for(auto str : vec){
        cout << str << " ";
    }
    cout << endl;
}

void Swap(int& a, int& b){
    int c = a;
    a = b;
    b = c;
}

int main(){
    int b = 5, c = 1;
    vector<string> vec = {"anfd", "gjnfsd", "fsknf", "dog", "jfklsjf"};

    PrintWords(vec);
    Swap(b, c);

    cout << "b: " << b << " c: " << c << endl;

    return 0;
}