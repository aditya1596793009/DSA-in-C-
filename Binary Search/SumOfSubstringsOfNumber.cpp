#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(){
    string s;
    cout<<"Enter a string: ";
    getline(cin,s);
    int n=s.length();
    int sum=0;
    for(int i=0; i<n; i++){
        for(int j=1; j<=n-i; j++){
            int t=stoi(s.substr(i,j));
            sum+=t;

        }
    }
    cout<<sum;
}