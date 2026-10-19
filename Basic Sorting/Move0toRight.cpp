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
    vector<int> arr={9,2,-3,0,5,0,0,6};
    int n=arr.size();
    print(arr);
    for(int i=0; i<n-1; i++){
        int swaps=0;
        for(int j=0; j<n-1-i; j++){
            if(arr[j]==0){
                swap(arr[j],arr[j+1]);
                swaps++;
            }
        }
        if(swaps==0) break;
    }
    print(arr);
}