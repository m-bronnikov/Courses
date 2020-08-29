#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

// template operator
template<typename T>
ostream& operator<<(ostream& os, const vector<T>& vec){
    for(auto i : vec){
        os << "|" << i << "|";
    }
    return os;
}

int main(){
    int x = 4, y = 5;

    if(x == 5){
        cout << "Equal" << endl;
    }else{
        cout << "Not Equal" << endl;
    }

    vector<int> nums = {1, 5, 3, 6, 2, 8};

    int n = 10, sum = 0;

    for(int i = 0; i < n; ++i){
        sum += i;
    }

    cout << "Sum: " << sum << endl;

    // circle
    sum = 0;
    while(n--){
        sum += n;
    }
    /*
    This is just a space
    */
    cout << "Sum: " << sum << endl;

    return 0;
}
