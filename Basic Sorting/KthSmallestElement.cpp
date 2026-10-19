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
    int K;
    cout<<"Enter value of K: ";
    cin>>K;
    vector<int> arr={3,1,2,5,4,0};
    int n=arr.size();
    print(arr);
    for(int i=0; i<n; i++){
        int mn=arr[i], mnIdx=i;
        for(int j=i; j<n; j++){
            if(arr[j]<mn){
                mn=arr[j];
                mnIdx=j;
            }
        }
        swap(arr[i],arr[mnIdx]);
        if(mnIdx==K-1) break;
    }
    cout<<arr[K-1];
}