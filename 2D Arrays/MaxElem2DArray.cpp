#include <iostream>
using namespace std;
int main(){
    // int arr[3][4];
    int arr[][4] = {{5,8,1,2},{9,9,4,4},{7,0,3,5}};
    int mx=arr[0][0];
    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            if(arr[i][j]>mx){
                mx=arr[i][j];
            }
        }
    }
    cout<<mx<<endl;
}
