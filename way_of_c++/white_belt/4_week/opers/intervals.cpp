#include <iostream>
#include <vector>
#include <iomanip>
#include <algorithm>

using namespace std;

struct Duration{
    int hour;
    int min;

    Duration(istream& is){
        is >> hour;
        is.ignore(1);
        is >> min;
    }

    Duration(int h = 0, int m = 0){
        hour = h;
        min = m;
    }
};

istream& operator>>(istream& is, Duration& d){
    is >> d.hour;
    is.ignore(1);
    is >> d.min;

    return is;
}

ostream& operator<<(ostream& os, const Duration& d){
    os << setfill('0') << setw(2) << d.hour << ":";
    os << setfill('0') << setw(2) << d.min;
    
    return os;
}

ostream& operator<<(ostream& os, const vector<Duration>& vec){

    for(const auto& d : vec){
        os << d << " ";
    }
    
    return os;
}

Duration operator+(const Duration& lft, const Duration& rht){
    Duration ans = lft;
    ans.min += rht.min;
    if(ans.min >= 60){
        ans.min -= 60;
        ++ans.hour;
    }
    ans.hour += rht.hour;
    return ans;
}

bool operator<(const Duration& lht, const Duration& rht){
    if(lht.hour == rht.hour){
        return lht.min < rht.min;
    } 
    return lht.hour < rht.hour; 
}

int main(){
    stringstream interval("01:50");
    Duration d1(interval);
    Duration d2(2, 10);
    Duration d3(6, 23);
    Duration d4(6, 12);

    vector<Duration> durs = {d1, d2, d3, d4};

    cout << d1 + d2 << endl;

    cout << durs << endl;

    sort(begin(durs), end(durs));

    cout << durs << endl;

    
    return 0;
}