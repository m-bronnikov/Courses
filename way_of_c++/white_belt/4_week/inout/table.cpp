#include <fstream>
#include <string>
#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    const string path1 = "input.txt";
    int N, M;
    ifstream fin(path1);

    if(!fin){
        cerr << "Cant read file!" << endl;
        return 0;
    }

    fin >> N >> M;
    
    
    for(int i = 0; i < N; ++i){

        if(i){
            cout << endl;
        }
        for(int j = 0; j < M; ++j){
            int val;
            fin >> val;
            fin.ignore(1);
            if(j){
                cout << " ";
            }
            cout << setw(10) << val;
        }
    }
    
    return 0;
}