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
    vector<int> arr={2,1,4,3,5};
    int n=arr.size();
    print(arr);
    for(int i=0; i<n-1; i++){
        int swaps=0;
        for(int j=0; j<n-1; j++){
            if(arr[j]<arr[j+1]) {
                swap(arr[j],arr[j+1]);
                swaps++;
            }
        }
        if(swaps==0) break;
    }
    print(arr);
}
