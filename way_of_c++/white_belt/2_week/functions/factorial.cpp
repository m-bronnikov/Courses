#include <iostream>


int Factorial(int num){
    int ans = 1;
    while(num > 1){
        ans *= num--;
    }
    return ans;
}