#include <iostream>
#include <string>
#include <set>
#include <vector>

using namespace std;

void PrintSet(const set<string>& s){
    for(auto& x : s){
        cout << x << endl;
    }
}

int main(){
    set<string> famous;
    famous.insert("Stroustrup");
    famous.insert("Ritchie");

    famous.erase("Max");

    cout << "Size: " << famous.size() << endl;
    PrintSet(famous);

    set<string> mounth = {"January", "March", "Feb"};

    set<string> mounth2 = {"Feb", "January", "March", "March"};

    PrintSet(mounth);

    cout << (mounth == mounth2) << endl;

    cout << mounth2.count("March") << endl;

    vector<string> v = {"a", "b", "a"};

    mounth = std::move(set<string>(begin(v), end(v)));

    PrintSet(mounth);

    return 0;
}