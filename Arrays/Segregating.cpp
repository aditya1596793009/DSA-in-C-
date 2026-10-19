#include <iostream>
#include <vector>
using namespace std;
void print(vector<int>& v){
    for(int ele:v){
        cout<<ele<<" ";
    }
}
int main(){
    vector<int> arr={0,1,0,0,1,1,0,0,1};
    int count0=0;
    int count1=0;
    for(int i=0; i<arr.size(); i++){
        if(arr[i]==0) count0++;
        if(arr[i]==1) count1++;
    }
    cout<<count0<<endl;
    cout<<count1<<endl;
    for(int i=0; i<count0; i++){
        arr[i]=0;
    }
    for(int i=count0; i<arr.size(); i++){
        arr[i]=1;
    }
    print(arr);
}