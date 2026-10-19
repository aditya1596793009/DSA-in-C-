#include <iostream>
using namespace std;
void swap(int* p1, int* p2){
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}
int main(){
   int x=8, y=9;
    swap(&x,&y);
    cout<<x<<" "<<y;
   
} 