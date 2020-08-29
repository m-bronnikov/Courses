#include <vector>

using namespace std;

vector<int> Reversed(const vector<int>& v){
    vector<int> copy(v.size());
    for(int i = 0; i < v.size(); ++i){
        copy[v.size() - 1 - i] = v[i];
    }
    return copy;
}