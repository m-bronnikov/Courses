#include <fstream>
#include <string>
#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    const string path1 = "input.txt";

    ifstream fin(path1);

    cout << fixed << setprecision(3);

    while(true){
        double num;
        fin >> num;
        if(!fin){
            break;
        }
        cout << num << endl;
    }
    
    return 0;
}