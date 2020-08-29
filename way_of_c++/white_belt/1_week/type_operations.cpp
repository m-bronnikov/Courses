#include <iostream>
#include <string>

using namespace std;

int main(){
    int x = 1;
    int y = 4;

    if(y > x){
        cout << y - x << endl;
    }else if(y == x){
        cout << 0 << endl;
    }else{
        cout << x - y << endl;
    }

    string a = "abx";
    string b = "def";

    if(a > b){
        cout << a + b << endl;
    }else{
        cout << b + a << endl;
    }
    
    return 0;
}