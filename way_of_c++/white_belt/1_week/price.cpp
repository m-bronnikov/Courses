#include <iostream>

using namespace std;

int main(){
    double n, a, b, x, y;

    cin >> n >> a >> b >> x >> y;

    if(n > b){
        cout << n * (1.0 - y / 100.0) << endl;
    }else if(n > a){
        cout << n * (1.0 - x / 100.0) << endl;
    }else{
        cout << n << endl;
    }

    return 0;
}