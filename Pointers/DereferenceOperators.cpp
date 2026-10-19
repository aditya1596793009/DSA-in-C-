#include <iostream>
using namespace std;
int main(){
  int x=13;
  int* p1= &x;
  int* p2 = &x;
  cout << x <<endl;
  *p2 = 12;
  cout << x<<endl;
}