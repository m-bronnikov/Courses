#include <iostream>
#include <map>
#include <string>

using namespace std;



int main(){
    int n;
    // all keys sorted
    cin >> n;
    for(int i = 0; i < n; ++i){
        string a, b;
        map<char, int> counta, countb;
        cin >> a >> b;
        if(a.size() != b.size()){
            cout << "NO" << endl;
            continue;
        }

        for(int j = 0; j < a.size(); ++j){
            ++counta[a[j]];
            ++countb[b[j]];
        }

        cout << (countb == counta ? "YES" : "NO") << endl;
        
    }


    return 0;
}