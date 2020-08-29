#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

class Route{
public:
    Route(const string& a, const string& b) : 
        source(a), destination(b), lenght(1){}
    
    const string& GetSource(){
        return source;
    }
    const string& GetDestination(){
        return destination;
    }
    int GetLenght(){
        return lenght;
    }
private:
    string source;
    string destination;
    int lenght;
};

int main(){
    Route r("Moscow", "Saint. P");
    cout << "Destination: " << r.GetDestination() << endl;
    cout << "Source: " << r.GetSource() << endl;
    cout << "Lenght: " << r.GetLenght() << endl;

    return 0;
}