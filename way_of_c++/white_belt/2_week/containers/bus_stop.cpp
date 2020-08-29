#include <iostream>
#include <map>
#include <string>
#include <vector>

using namespace std;




int main(){
    int n;
    cin >> n;

    map<string, vector<string>> stops, buses;

    for(int t = 0; t < n; ++t){
        string cmd;
        cin >> cmd;

        if(cmd == "NEW_BUS"){
            string bus;
            int count;
            cin >> bus >> count;
            buses[bus].resize(count);

            for(string& s : buses[bus]){
                cin >> s;
                stops[s].push_back(bus);
            }
        }else if(cmd == "BUSES_FOR_STOP"){
            string stop;
            cin >> stop;
            if(stops.count(stop)){
                for(const string& b : stops[stop]){
                    cout << b << " ";
                }
                cout << endl;
            }else{
                cout << "No stop" << endl;
            }
        }else if(cmd == "STOPS_FOR_BUS"){
            string bus;
            cin >> bus;
            // all stops for bus
            if(buses.count(bus)){
                for(const string& s : buses[bus]){
                    cout << "Stop " << s << ":";
                    if(stops[s].size() == 1){
                        cout << " no interchange" << endl;
                    }else{
                        for(const string& b : stops[s]){
                            if(b != bus){
                                cout << " " << b; 
                            }
                        }
                        cout << endl;
                    }
                }
            }else{
                cout << "No bus" << endl;
            }
        }else{
            // all buses
            if(!buses.size()){
                cout << "No buses" << endl;
            }
            for(auto it : buses){
                cout << "Bus " << it.first << ":";
                for(const string& s : it.second){
                    cout << " " << s;
                }
                cout << endl;
            }
        }
    }

    return 0;
}