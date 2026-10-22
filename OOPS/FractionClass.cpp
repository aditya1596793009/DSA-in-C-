#include <iostream>
using namespace std;
class Fraction{
public:
    int num;
    int den;
    Fraction(int num, int den){
        this->num=num;
        this->den=den;
        simplify();
    }
    Fraction(){

    }
    void print(){
        cout<<num<<"/"<<den<<endl;
    }
    void multiply(Fraction f){
        num*=f.num;
        den*=f.den;
        simplify();
    }
    void add(Fraction f){
        num=(num*f.den)+(f.num*den);
        den*=f.den;
        simplify();
    }

    int gcd(int a, int b){
        if(a==0) return b;
        gcd(b%a,a);
    }

    void simplify(){
        int hcf = gcd(num,den);
        num/=hcf;
        den/=hcf;
    }
};

Fraction multiply(Fraction& f1, Fraction& f2){
    Fraction res;
    res.num=f1.num*f2.num;
    res.den=f1.den*f2.den;
    return res;
}

Fraction division(Fraction& f1, Fraction& f2){
    Fraction res;
    res.num=f1.num*f2.den;
    res.den=f2.num*f1.den;
    res.simplify();
    return res;
}

int main(){
    Fraction f1(2,5);
    Fraction f2(3,5);
    f1.print();
    f2.print();
    Fraction product = multiply(f1,f2);
    product.print();
    Fraction div = division(f1,f2);
    div.print();

    f1.multiply(f2); // f1 me f2 multiply kar do
    f1.print();
    f2.print();

    f1.add(f2);
    f1.print();
    f2.print();

    Fraction f3(6,8);
    f3.print();
}