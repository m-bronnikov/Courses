#include <string>
#include <iostream>

using namespace std;

struct Specialization{
    string value;
    explicit Specialization(string&& val){
        value = std::move(val);
    }
};

struct Course{
    string value;
    explicit Course(string&& val){
        value = std::move(val);
    }
};

struct Week{
    string value;
    explicit Week(string&& val){
        value = std::move(val);
    }
};

struct LectureTitle {
  string specialization;
  string course;
  string week;
  explicit LectureTitle(const Specialization& spec, const Course& crs, const Week& wk){
      specialization = spec.value;
      course = crs.value;
      week = wk.value;
  }
};

int main(){
    LectureTitle title(
        Specialization("C++"),
        Course("White belt"),
        Week("4th")
    );
    return 0;
}