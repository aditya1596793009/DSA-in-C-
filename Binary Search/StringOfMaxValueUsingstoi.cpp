#include <iostream>
#include <string>
#include <algorithm>
#include <climits>
using namespace std;
int main(){
    string arr[]={"23123","4647023","456","00182","940","2901"};
    int n = 6;
    int mx=stoi(arr[0]);
    string mxs=arr[0];
    for(int i=0; i<6; i++){
        if(stoi(arr[i])>mx) mxs=arr[i];
    }
    cout<<mxs;

}