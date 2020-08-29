#include <iostream>

using namespace std;

int main(){
    int a, b, c;
    cin >> a >> b;

    while(a){
        b %= a;
        c = a;
        a = b;
        b = c;
    }

    cout << b << endl;

    return 0;
}