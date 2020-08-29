#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(){
    string a, b;

    cin >> a >> b;
    
    if(b < a){
        swap(a, b);
    }

    cin >> b;

    cout << (a < b ? a : b) << endl;

    return 0;
}