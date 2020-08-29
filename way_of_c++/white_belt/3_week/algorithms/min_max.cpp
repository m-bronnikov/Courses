#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;


int main(){
    int a=2, b=3;

    string x = "anffvodf";
    string y = "bagfmdkf";

    vector<int> vec = {1, 0, 5, 2, 6, 7, 8, 3};

    cout << max(a, b) << endl;

    cout << min(a, b) << endl;

    cout << max(x, y) << endl;

    cout << min(x, y) << endl;

    sort(begin(vec), end(vec));

    for(const auto n : vec){
        cout << n << " ";
    }
    cout << endl;

    return 0;
}