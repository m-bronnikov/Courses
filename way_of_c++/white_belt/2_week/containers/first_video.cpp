#include <vector>
//#include <string>
#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<string> vec(n);
    
    for(string& s : vec){
        cin >> s;
    }

    for(const string& s : vec){
        cout << s << endl;
    }

    cout << "size: " << vec.size() << endl;

    return 0;
}