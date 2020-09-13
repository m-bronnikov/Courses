#include <vector>
#include <string>
#include <iostream>
#include <algorithm>

using namespace std;



struct Term{
    char oper;
    double value;

    Term(const char c, const double val) : oper(c), value(val){}

    double Apply(double val) const{
        if(oper == '+'){
            return val + value;
        }
        if(oper == '-'){
            return val - value;
        }
        if(oper == '*'){
            return val * value;
        }
        return val / value;
    }

    void Invert(){
        if(oper == '+'){
            oper = '-';
        }else if(oper == '-'){
            oper = '+';
        }else if(oper == '*'){
            oper = '/';
        }else if(oper == '/'){
            oper = '*';
        }
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
        reverse(terms.begin(), terms.end());
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
