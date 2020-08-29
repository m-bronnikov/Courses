#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct Lecture{
    string title;
    string author;
    int duration;
};

void print_lecture(const Lecture& lec){
    cout << "Title: " << lec.title << endl;
    cout << "Duration: " << lec.duration << endl;
    cout << "Author: " << lec.author << endl;
}

int main(){
    Lecture course = {"OOP", "MIPT", 6};
    print_lecture(course);
    course.duration = 7;
    print_lecture({"OS", "MAI", 1});
    return 0;
}