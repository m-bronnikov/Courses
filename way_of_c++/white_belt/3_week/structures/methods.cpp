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

    void SetDestination(const string& new_destination){
        source = new_destination;
        UpdateLenght();
    }

    void SetSource(const string& new_source){
        source = new_source;
        UpdateLenght();
    }

private:
    void UpdateLenght(){
        ++lenght;
    }
    string source;
    string destination;
    int lenght;
};

int main(){
    Route r("Moscow", "Saint. P");
    cout << "Destination: " << r.GetDestination() << endl;
    cout << "Source: " << r.GetSource() << endl;
    cout << "Lenght: " << r.GetLenght() << endl;

    r.SetDestination("Kazan");

    cout << "Destination: " << r.GetDestination() << endl;
    cout << "Source: " << r.GetSource() << endl;
    cout << "Lenght: " << r.GetLenght() << endl;
    

    return 0;
}