#include <iostream>
#include <string>
#include <system_error>

using namespace std;

string AskTimeServer();

class TimeServer {
public:
    string GetCurrentTime(){
        try{
            last_fetched_time = AskTimeServer();
        }catch(system_error& e){

        }
        return last_fetched_time;
    }
private:
    string last_fetched_time = "00:00:00";
};