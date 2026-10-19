#include <iostream>
using namespace std;
int main(){
    // int arr[3][4];
    int a=0;
    int row;
    int arr[][4] = {{5,8,1,2},{9,9,4,4},{7,0,3,5}};
    for(int i=0; i<3; i++){
        int sum=0;
        for(int j=0; j<4; j++){
            sum+=arr[i][j];
        }
        if(sum>a){
            a=sum;
            row=i;
        }
    }
    cout<<row<<" "<<a<<endl;
}