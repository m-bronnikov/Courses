#include <iostream>
#include <vector>
#include <string>
#include <chrono>


using namespace std;
using namespace std::chrono;

const int mask = 0x80;

typedef struct Person{
    string name;
    string surname;
    int age;
}Person;

vector<Person> GetMoscowPopulation(){
    return vector<Person>(12500000, {"Max", "Bronnikov", 20});
}

void PrintPopulationSize(const vector<Person>& population){
    cout << "There are " << population.size() << " people in Moscow" << endl;
}

int main(){

    auto start = steady_clock::now();
    vector<Person> people = GetMoscowPopulation();
    auto end = steady_clock::now();

    cout << "GetMoscowPopulation worked " << duration_cast<milliseconds>(end - start).count() << "ms" << endl;

    start = steady_clock::now();
    PrintPopulationSize(GetMoscowPopulation());
    end = steady_clock::now();
    cout << "PrintMoscowPopulation worked " << duration_cast<milliseconds>(end - start).count() << "ms" << endl;

    cout << "0x80 = " << mask << endl;

    return 0;
}