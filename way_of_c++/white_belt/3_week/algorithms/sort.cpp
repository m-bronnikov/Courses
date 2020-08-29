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
    int n = 0;
    cin >> n;

    vector<int> vec(n);

    for(auto& i : vec){
        cin >> i;
    }

    sort(begin(vec), end(vec), [](int x, int y){return abs(x) < abs(y);});

    cout << vec << endl;

    return 0;
}