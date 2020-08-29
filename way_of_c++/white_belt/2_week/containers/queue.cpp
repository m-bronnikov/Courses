#include <vector>
//#include <string>
#include <iostream>

using namespace std;

void come(vector<int>& vec, int num){
    vec.resize(vec.size() + num);
}

void worry(vector<int>& vec, int num){
    vec[num] = 1;
}

void quiet(vector<int>& vec, int num){
    vec[num] = 0;
}

int worry_count(const vector<int>& vec){
    int count = 0;

    for(int c : vec){
        count += c;
    }

    return count;
}

int main(){
    int n;
    cin >> n;

    vector<int> queue;

    for(int i = 0; i < n; ++i){
        string s;
        cin >> s;

        if(s == "COME"){
            int num;
            cin >> num;
            come(queue, num);
        }else if(s == "WORRY"){
            int num;
            cin >> num;
            worry(queue, num);
        }else if(s == "QUIET"){
            int num;
            cin >> num;
            quiet(queue, num);
        }else{
            cout << worry_count(queue) << endl;
        }
    }

    return 0;
}