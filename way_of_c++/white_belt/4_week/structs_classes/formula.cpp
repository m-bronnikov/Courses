#include <vector>
#include <string>
#include <iostream>

using namespace std;



struct Term{
    double value;

    Term(const char c, const double val) : value(val){
        if(c == '-'){
            value *= -1;
        }
    }

    double Apply(double val) const{
        return val + value;
    }

    void Invert(){
        value *= -1;
    }

};

class Function{
public: 
    void AddPart(char c, double val){
        terms.push_back({c, val});
    }

    void Invert(){
        for(auto& term : terms){
            term.Invert();
        }
    }

    double Apply(double val) const{
        for(const auto& term : terms){
            val = term.Apply(val);
        }
        return val;
    }

private:
    vector<Term> terms;
};
