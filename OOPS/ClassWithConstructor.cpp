#include <iostream>
using namespace std;
class Student{
public:
    string name;
    int roll;
    float cgpa;
    Student(string n,int r,float c){ // Parameterised Constructor
        name=n;
        roll=r;
        cgpa=c;
    }
    Student(int r,float c,string n){ // Parameterised Constructor
        name=n;
        roll=r;
        cgpa=c;
    }
    Student(){ // Default constructor

    }
};
int main(){
    Student x("Aditya",2606069,9.2);
    cout<<x.name<<" "<<x.roll<<" "<<x.cgpa<<endl;
    
    Student y(2606067,8.9,"Sahil");
    cout<<y.name<<" "<<y.roll<<" "<<y.cgpa<<endl;
}