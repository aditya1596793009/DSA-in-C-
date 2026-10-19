#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> arr={179,124,120,99,87,79,44,22,19,-4};
    int target = 44;
    int n = arr.size();
    int lo=0; 
    int hi=n-1; 
    int mid;
    while(lo<=hi){
        mid=lo+(hi-lo)/2;
        if(arr[mid]>target) lo=mid+1;
        else if(arr[mid]<target) hi=mid-1;
        else {
            cout<<mid; 
            break;}
    }
}