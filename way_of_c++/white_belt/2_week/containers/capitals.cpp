#include <iostream>
#include <map>
#include <string>

using namespace std;



int main(){
    int n; 
    cin >> n;

    map<string, string> countrys;

    for(int i = 0; i < n; ++i){
        string cmd;
        cin >> cmd;

        if(cmd == "CHANGE_CAPITAL"){
            string name, new_cap;
            cin >> name >> new_cap;
            if(countrys.find(name) == countrys.end()){
                countrys[name] = new_cap;
                cout << "Introduce new country " << name << " with capital " << new_cap << endl;
            }else if(countrys[name] == new_cap){
                cout << "Country " << name << " hasn't changed its capital" << endl;
            }else{
                cout << "Country " << name << " has changed its capital from " << countrys[name] << " to " << new_cap << endl;
                countrys[name] = new_cap;
            }
        }else if(cmd == "RENAME"){
            string old_name, new_name;
            cin >> old_name >> new_name;
            if(old_name == new_name){
                cout << "Incorrect rename, skip" << endl;
            }else if(countrys.find(new_name) != countrys.end()){
                cout << "Incorrect rename, skip" << endl;
            }else if(countrys.find(old_name) == countrys.end()){
                cout << "Incorrect rename, skip" << endl;
            }else{
                cout << "Country " <<  old_name;
                cout << " with capital " << countrys[old_name];
                cout << " has been renamed to " << new_name << endl;
                countrys[new_name] = countrys[old_name];
                countrys.erase(old_name);
            }
        }else if(cmd == "ABOUT"){
            string name;
            cin >> name;
            if(countrys.find(name) == countrys.end()){
                cout << "Country " << name << " doesn't exist" << endl;
            }else{
                cout << "Country " << name << " has capital " << countrys[name] << endl;
            }
        }else{
            if(countrys.size()){
                for(auto it : countrys){
                    cout << it.first << "/" << it.second << " ";
                }
                cout << endl;
            }else{
                cout << "There are no countries in the world" << endl;
            }
        }
    }


    return 0;
}