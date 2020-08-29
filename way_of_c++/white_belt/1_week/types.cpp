#include <iostream>
#include <string>
#include <vector>
#include <map>

typedef struct Person{
    std::string name;
    int age;
}Person;

int main(){
    int x = 1;
    double y = 0.2;
    bool l = true;
    char s = 'a';
    std::string str = "Hello World!";
    std::cout << str << std::endl;
    std::vector<int> v = {1, 4, 3};
    std::cout << v.size() << std::endl;
    std::map<std::string, int> dict;
    dict["one"] = 1;
    dict["two"] = 2;
    std::cout << dict["two"] << std::endl;
    std::vector<Peson> staff;
    staff.push_back(max);
    Person max = {"Max", 20};
    std::cout << "Name: " << max.name << " Age: " << max.age << std::endl;
    return 0;
}