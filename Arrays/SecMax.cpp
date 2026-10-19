#include <iostream>
#include <climits>
using namespace std;
int main(){
    int arr[] = {35,5,1,88,34,90};
    int n= sizeof(arr)/4;
    int mx = INT_MIN;
    for(int i=0; i<n; i++){
        if(arr[i]>mx) mx=arr[i];
    }
    cout<<mx<<endl;
    int smx=INT_MIN;
    for(int i=0; i<n; i++){
        if(arr[i]==mx) continue;
        if(arr[i]>smx) smx=arr[i];
    }
    cout<<smx<<endl;
} 