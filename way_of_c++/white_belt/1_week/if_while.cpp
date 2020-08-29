#include <iostream>


using namespace std;

int main(){
    int x, y;

    cin >> x >> y;

    if(x == y){
        cout << x << "==" << y << endl;
    }else{
        cout << x << "!=" << y << endl;
    }

    int n;
    int sum = 0;
    cout << "Enter number >= 0: ";
    cin >> n;

    if(n < 0){
        cout << "Wrong num" << endl;
    }else{
        sum = n;
        while(n--){
            sum += n;
        }
        cout << "Summ: " << sum << endl;
    }

    int tru = 14;
    int user = 0;

    do{
        cout << "Enter your prediction: ";
        cin >> user;
        if(user > tru){
            cout << "Real smaller" << endl;
        }else if(user < tru){
            cout << "Real is bigger" << endl;
        }
    }while(user != tru);

    cout << "Great! Yor prediction is tru" << endl;

    while(n--)

    return 0;
}