#include <iostream>
using namespace std;
int main(){
    int mn=INT16_MAX;
    int arr[][4] = {{5,8,1,2},{9,9,4,4},{7,0,3,5}};
    for(int i=0; i<3; i++){
        int mx=INT16_MIN;
        for(int j=0; j<4; j++){
            if(mx<arr[i][j]){
                mx=arr[i][j];
            }
        }
        if(mx<mn) mn=mx;
    }
    cout<<mn<<endl;
}