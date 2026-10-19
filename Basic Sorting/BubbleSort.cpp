#include <iostream>
using namespace std;
void print(int arr[],int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int arr[]={5,4,3,2,1};
    int n = 5;
    print(arr,5);
    for(int i=0; i<n-1; i++){
        for(int j=0; j<=n-2; j++){
            if(arr[j]>arr[j+1]) swap(arr[j],arr[j+1]);
        }
    }
    print(arr,5);
}
