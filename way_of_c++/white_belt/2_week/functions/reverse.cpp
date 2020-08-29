#include <vector>


using namespace std;

void Reverse(vector<int>& v){
    int stop = v.size() >> 1;
    
    for(int i = 0; i < stop; ++i){
        int c  = v[i];
        v[i] = v[v.size() - 1 - i];
        v[v.size() - 1 - i] = c;
    }
}
