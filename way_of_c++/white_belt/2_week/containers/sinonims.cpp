#include <iostream>
#include <string>
#include <set>
#include <map>


using namespace std;


int main(){
    map<string, set<string>> pairs;
    int n;
    cin >> n;
    while(n--){
        string word1, word2, cmd;
        cin >> cmd;
        if(cmd == "ADD"){
            cin >> word1 >> word2;

            pairs[word2].insert(word1);
            pairs[word1].insert(word2);
        }else if(cmd == "CHECK"){
            cin >> word1 >> word2;

            if(pairs.count(word1) && pairs[word1].count(word2)){
                cout << "YES" << endl;
            }else{
                cout << "NO" << endl;
            }
        }else{
            cin >> word1;
            cout << (pairs.count(word1) ? pairs[word1].size() : 0) << endl;
        }
    }
    return 0;
}