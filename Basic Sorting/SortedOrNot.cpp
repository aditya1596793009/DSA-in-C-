#include <iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    bool flag=true;
    for(int i=0; i<7; i++){
        if(arr[i]>arr[i+1]){
            flag=false;
            break;
        }
    }
    if(flag==false) cout<<"Not sorted";
    else cout<<"Sorted";
}