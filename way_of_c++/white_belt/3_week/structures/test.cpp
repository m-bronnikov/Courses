#include <string>
#include <map>
#include <algorithm>
#include <iostream>

using namespace std;

int main(){
    map<int, int> a = {{1, 5}, {3, 6}, {5, 6}};
    auto it = a.upper_bound(0);
    if(it == a.end()){
        cout << "fuck" << endl;
    }
    --it;
    if(it == a.end()){
        cout << "Zbs" << endl;
    }else if(it == a.begin()){
        cout << "Not zbs" << endl;
    }
    return 0;
}