#include <iostream>
using namespace std;
void path(int m, int n,string s){
    if(m==1 && n==1) {
        cout<<s<<endl;
        return;
    }
    if(m==0 || n==0) return;
    path(m,n-1,s+"R");
    path(m-1,n,s+"D");
}
int main(){
    int m,n;
    cout<<"Enter rows and cols: ";
    cin>>m>>n;
    path(m,n,"");
} 