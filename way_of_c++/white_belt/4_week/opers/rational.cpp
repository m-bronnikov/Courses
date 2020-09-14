#include <iostream>
#include <algorithm>

using namespace std;

class Rational {
public:
    Rational(int num = 0, int denum = 1) : numerator(num), denuminator(denum){
        if(denuminator < 0){
            numerator = -numerator;
            denuminator = -denuminator;
        }

        int pos_num = numerator > 0 ? numerator : -numerator;
        int nod = gcd(pos_num, denuminator);

        numerator /= nod;
        denuminator /= nod;

        denuminator = numerator ? denuminator : 1;
    }

    int Numerator() const{
        return numerator;
    }
    int Denominator() const{
        return denuminator;
    }


    

private:
    static int gcd(int a, int b){
        while(a){
            b %= a;
            std::swap(a, b);
        }
        return b;
    }

    int numerator;
    int denuminator;
};


Rational operator+(const Rational& lhs, const Rational& rhs){
    int denom = rhs.Denominator() * lhs.Denominator();
    int numer = rhs.Numerator()*lhs.Denominator() + lhs.Numerator()*rhs.Denominator();

    return {numer, denom};
}


Rational operator-(const Rational& lhs, const Rational& rhs){
    int denom = rhs.Denominator() * lhs.Denominator();
    int numer = lhs.Numerator()*rhs.Denominator() - rhs.Numerator()*lhs.Denominator();

    return {numer, denom};
}

Rational operator-(const Rational& lhs){
    int denom = lhs.Denominator();
    int numer = -lhs.Numerator();

    return {numer, denom};
}

Rational operator+(const Rational& lhs){
    return {lhs.Numerator(), lhs.Denominator()};
}

bool operator==(const Rational& lhs, const Rational& rhs){
    return ((lhs.Numerator() == rhs.Numerator()) && (lhs.Denominator() == rhs.Denominator()));
}

Rational operator*(const Rational& lhs, const Rational& rhs){
    int denom = rhs.Denominator() * lhs.Denominator();
    int numer = rhs.Numerator() * lhs.Numerator();

    return {numer, denom};
}

Rational operator/(const Rational& lhs, const Rational& rhs){

    return lhs * Rational(rhs.Denominator(), rhs.Numerator());
}

ostream& operator<<(ostream& os, const Rational& r){
    os << r.Numerator() << "/" << r.Denominator();
    return os;
}

istream& operator>>(istream& is, Rational& r){
    int num, denum;
    char c;

    is >> num >> c >> denum;
    if(is && c == '/'){
        r = Rational(num, denum);
    }
    return is;
}

bool operator<(const Rational& lhs, const Rational& rhs){
    int left = lhs.Numerator()*rhs.Denominator();
    int right = rhs.Numerator()*lhs.Denominator();

    return left < right;
}
