#include <iostream>
using namespace std;
class Cricketer{
private: 
    int run;
public:
    string name;
    float average;
    Cricketer(string name,int run,float average){
        this->name=name;
        this->run=run;
        this->average=average;
    }
};
int main(){
    Cricketer* c = new Cricketer("Virat Kohli",10000,58.1);
    cout<<c->name<<endl;
    cout<<c->average<<endl;
    // cout<<c->run<<endl; // Give error because run is private in Cricketer
}
