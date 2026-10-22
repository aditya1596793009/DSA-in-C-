#include <iostream>
using namespace std;
class ComplexNo{
public:
    int real;
    int img;
    ComplexNo(int real,int img){
        this->real=real;
        this->img=img;
    }
    ComplexNo(){

    }
    void print(){
        if(img>0) cout<<real<<"+"<<img<<"i"<<endl;
        else cout<<real<<"-"<<abs(img)<<"i"<<endl;
    }
    void printi(){
        if(img>0) cout<<"("<<real<<"+"<<img<<"i)";
        else cout<<"("<<real<<"-"<<abs(img)<<"i)";
    }
};

ComplexNo add(ComplexNo& c1,ComplexNo& c2){
    ComplexNo res;
    res.real=c1.real+c2.real;
    res.img=c1.img+c2.img;
    return res;
}

ComplexNo subtract(ComplexNo& c1,ComplexNo& c2){
    ComplexNo res;
    res.real=c1.real-c2.real;
    res.img=c1.img-c2.img;
    return res;
}

ComplexNo multiply(ComplexNo& c1,ComplexNo& c2){
    ComplexNo res;
    res.real=(c1.real*c2.real-c1.img*c2.img);
    res.img=c1.real*c2.img+c2.real*c1.img;
    return res;
}

void divide(ComplexNo& c1,ComplexNo& c2){
    ComplexNo num;
    int den;
    num.real=(c1.real*c2.real+c1.img*c2.img);
    num.img=(c2.real*c1.img-c1.real*c2.img);
    den=c2.real*c2.real+c2.img*c2.img;
    num.printi();
    cout<<"/"<<den;
}

int main(){
    ComplexNo c1(4,5);
    ComplexNo c2(2,3);
    c1.print();
    c2.print();

    ComplexNo addition = add(c1,c2);
    addition.print();

    ComplexNo subtraction = subtract(c1,c2);
    subtraction.print();

    ComplexNo multiplication = multiply(c1,c2);
    multiplication.print();

    divide(c1,c2);
}