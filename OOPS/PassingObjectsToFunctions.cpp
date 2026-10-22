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
    void print(){
        cout<<name<<" "<<roll<<" "<<cgpa<<endl;
    }
};

void change(Student& s){ // Pass by reference
    s.name="Akash"; 
}
int main(){
    Student x("Aditya",2606069,9.2);
    change(x);
    x.print();
}