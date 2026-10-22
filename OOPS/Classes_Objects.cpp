#include <iostream>
using namespace std;
class Student{
public:
    string name;
    int roll;
    float cgpa;
};
int main(){
    Student x;
    x.name="Aditya";
    x.roll=2606069;
    x.cgpa=8.9;

    Student y;
    y.name="Sahil";
    y.roll=2606067;
    y.cgpa=8.7;
    
    cout<<x.name<<endl;
}