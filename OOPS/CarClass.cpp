#include <iostream>
using namespace std;
class Car{
public:
    string name;
    int power;
    float mileage;
    bool isE20Compatable;
    void print(){
        cout<<name<<" "<<power<<" "<<mileage<<" "<<isE20Compatable<<endl;
    }
};
int main(){
    Car c1;
    c1.name="Kia Sonet";
    c1.power=118;
    c1.mileage=9.2;
    c1.isE20Compatable=true;

    Car c2 = {"Toyota Fortuner",200,7.8,false};
    c1.print();
    c2.print();
}