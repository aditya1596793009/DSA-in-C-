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
    vector<int> arr={5,4,3,6,2,1};
    int n=arr.size();
    print(arr);
    for(int i=1; i<n; i++){
        int j=i;
        while(j>0){
            if(arr[j]<arr[j-1]){
                swap(arr[j],arr[j-1]);
            }
            j--;
        }
    }
    print(arr);
}