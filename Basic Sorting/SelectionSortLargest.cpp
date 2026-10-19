#include <iostream>
#include <vector>
using namespace std;
void print(vector<int> &arr){
    for(int i=0; i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    vector<int> arr={3,1,2,5,4,0};
    int n=arr.size();
    print(arr);
    for(int i=0; i<n-1; i++){
        int mx=arr[0], mxIdx=0;
        for(int j=n-1-i; j>=0; j--){
            if(arr[j]>mx){
                mx=arr[j];
                mxIdx=j;
            }
        }
        swap(arr[n-1-i],arr[mxIdx]);
    }
    print(arr);
}