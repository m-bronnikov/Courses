#include <iostream>
#include <string>
#include <set>


using namespace std;


int main(){
    set<string> famous;
    int n;
    cin >> n;
    while(n--){
        string s;
        cin >> s;
        famous.insert(s);
    }
    cout << famous.size();
    return 0;
}