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
    vector<int> arr={7,4,9,1,3,6,2,5};
    int n=arr.size();
    print(arr);
    for(int i=0; i<n-1; i++){
        int mn=arr[i], mnIdx=i;
        for(int j=i; j<n; j++){
            if(arr[j]<mn) {
                mn=arr[j];
                mnIdx=j;
            }
        }
        swap(arr[i],arr[mnIdx]);
    }
    print(arr);
}