#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<int> a = {1, 4, 3, 5, 3, 5, 9, 0};

    int sum = 0;
    for(int n : a){
        sum += n;
    }

    cout << "Sum:" << sum << endl;

    sum = 0;
    for(int i = 0; i < a.size(); ++i){
        cout << "[" << i << "]: " << a[i] << endl;
        sum += a[i];
        if(a[i] == 9){
            break;
        }
    }

    cout << "Sum:" << sum << endl;

    return 0;
}