#include <iostream>
#include "Container.h"

using namespace std;

int main() {
    Container c;
    int a = 5;
    int sum = 0;
    for(int i = 1; i <= a; ++i){
        sum += i;
    }
    std::cout << sum << std::endl;
    return 0;
}
