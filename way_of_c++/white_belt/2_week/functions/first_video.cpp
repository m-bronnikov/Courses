#include <iostream>
#include <vector>


using namespace std;

int summ(int a, int b){
    return a + b;
}

bool contains_num(vector<int>& vec, int num){
    for(auto i : vec){
        if(i == num){
            return true;
        }
    }
    return false;
}

int main(){
    int a = 3, b = 5;
    vector<int> vec = {4, 5, 2, 2, 6, 3, 6, 7, 3};

    cout << summ(a, b) << endl;

    cout << (contains_num(vec, 7) ? "Contains" : "Not contains")  << endl;

    return 0;
}