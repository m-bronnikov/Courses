#include <map>
#include <iostream>
#include <string>

using namespace std;

int main(){
    map<string, int> m = {{"one", 1}, {"two", 2}, {"three", 3}};
    for(const auto& [key, value] : m){
        cout << key << " : " << value << endl;
    }

    return 0;
}