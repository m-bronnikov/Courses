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

    cin >> a;

    sort(begin(vec), end(vec));

    cout << vec << endl;
    cout << "elems count: ";
    cout << count_if(begin(vec), end(vec), [a](int x){return x > a;}) << endl;

    return 0;
}