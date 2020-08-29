#include <iostream>
#include <map>
#include <string>
#include <vector>

using namespace std;



int main(){
    int n;
    cin >> n;
    
    map<vector<string>, int> buses;

    for(int i = 0; i < n; ++i){
        int count;
        cin >> count;
        vector<string> stops(count);
        for(string& s : stops){
            cin >> s;
        }
        if(buses.count(stops)){
            cout << "Already exists for " << buses[stops] << endl;
        }else{
            int summ = buses.size() + 1;
            cout << "New bus " << summ << endl;
            buses[stops] = summ;
        }
    }

    return 0;
}