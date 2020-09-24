#include <exception>
#include <string>
#include <stdexcept>

using namespace std;

void EnsureEqual(const string& left, const string& right){
    if(left != right){
        throw runtime_error(left + " != " + right);
    }
}