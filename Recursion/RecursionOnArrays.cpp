#include <iostream>
#include <vector>
using namespace std;
void print(vector<int>& arr, int idx){
    if(idx==arr.size()) return;
    print(arr,idx+1);
    cout<<arr[idx]<<" ";
    // print(arr,idx+1);
}
int main(){
    vector<int> arr={5,8,2,534,8,235,-8521};
    print(arr,0);
}