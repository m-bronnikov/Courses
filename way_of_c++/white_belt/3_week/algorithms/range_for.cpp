#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

template<typename T>
ostream& operator<<(ostream& os, const vector<T>& vec){
    for(const T& it : vec){
        os << it << " ";
    }
    return os;
}


int main(){
    int a = 0;
    vector<int> vec = {1, 0, 5, 2, 6, 7, 8, 3, 7};

    cout << vec << endl;

    for(int& i : vec){
        ++i;
    }

    cout << vec << endl;

    return 0;
}