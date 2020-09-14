#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

class ReversibleString{
public:
    ReversibleString(const string& s) : data(s){}
    ReversibleString(){}

    const string& ToString() const{
        return  data;
    }

    void Reverse(){
        reverse(begin(data), end(data));
    }

private:
    string data;
};
