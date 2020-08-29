#include <iostream>
#include <vector>

using namespace std;



int main(){
    int x, y;
    int size = 0;

    cin >> x;

    y = x;

    while(y){
        y >>= 1;
        ++size;
    }

    while(size--){
        cout << ((x & (1 << size)) != 0);
    } 
}
