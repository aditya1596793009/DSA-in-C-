#include <iostream>
using namespace std;
int main(){
    float l,b;
    cout<<"Enter length: ";
    cin>>l;
    cout<<"Enter breadth: ";
    cin>>b;
    float area,per;
    area = l*b;
    per = 2*(l+b);
    if(area>per) cout<<"Area is greater";
    else cout<<"Perimeter is greater";

}