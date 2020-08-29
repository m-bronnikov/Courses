#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>

using namespace std;

int main(){
    double a, b, c;

    cin >> a >> b >> c;

    if(a == 0.0){
        if(b != 0.0){
            cout << -c / b << endl;
        }
        return 0;
    }

    double D = b*b - 4.0*a*c;

    if(D > 0.0){
        cout << (sqrt(D) - b) / (2*a) << " ";
        cout << (-sqrt(D) - b) / (2*a) << endl;
    }else if(D == 0.0){
        cout << -b / (2*a) << endl;
    }

    return 0;
}