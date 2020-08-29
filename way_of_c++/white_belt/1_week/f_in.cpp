#include <iostream>
#include <string>

using namespace std;

int main(){
    string s;

    cin >> s;

    int ans = -2;

    for(int i = 0; i < s.size(); ++i){
        if(s[i] == 'f' && !(++ans)){
            cout << i << endl;
            return 0;
        }
    }

    cout << ans << endl;

    return 0;
}