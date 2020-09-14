#include <iostream>

#include <iomanip>

using namespace std;

struct Duration{
    int hour;
    int min;

    Duration(istream& is){
        is >> hour;
        is.ignore(1);
        is >> min;
    }
};

ostream& operator<<(ostream& os, Duration& d){
    os << setfill('0') << setw(2) << d.hour << ":";
    os << setfill('0') << setw(2) << d.min;
    
    return os;
}

int main(){
    stringstream interval("01:50");
    Duration dur(interval);

    cout << dur << endl;

    operator<<(cout, "Hello\n");
    return 0;
}