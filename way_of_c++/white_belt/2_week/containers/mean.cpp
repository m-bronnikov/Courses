#include <vector>
//#include <string>
#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;

    vector<int> vec(n);

    int mean = 0, count = 0;

    for(int& i : vec){
        cin >> i;
        mean += i;
    }

    mean /= n;

    // cout << mean << endl;

    for(int i : vec){
        // cout << i << endl;
        if(i > mean){
            ++count;
        }
    }

    cout << count << endl;

    for(int i = 0; i < vec.size(); ++i){
        if(vec[i] > mean){
            cout << i << " ";
        }
    }

    if(count){
        cout << endl;
    }

    return 0;
}