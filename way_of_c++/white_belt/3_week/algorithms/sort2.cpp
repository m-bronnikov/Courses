#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

struct comparator{
    bool operator()(const string& a, const string& b){
        return lexicographical_compare(a.begin(), a.end(),
            b.begin(), b.end(), [](const auto c1, const auto c2){
                return tolower(c1) < tolower(c2);
            });
    }
}comparator;

template<typename T>
ostream& operator<<(ostream& os, const vector<T>& vec){
    for(const T& it : vec){
        os << it << " ";
    }
    return os;
}


int main(){
    int n = 0;
    cin >> n;

    vector<string> vec(n);

    for(auto& i : vec){
        cin >> i;
    }

    sort(begin(vec), end(vec), comparator);

    cout << vec << endl;

    return 0;
}