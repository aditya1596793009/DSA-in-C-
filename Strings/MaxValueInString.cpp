#include <iostream>
#include <string>
using namespace std;
int main(){
    string arr[6] = {"0123","0023","456","00182","940","2901"};
    int n=6;
    int maxs=0;
    for(int i=0; i<n; i++){
        int mxch=arr[i][0];
        for(int j=0; j<arr[i].size(); j++){
            if(arr[i][j]>mxch) mxch=arr[i][j];
        }
        if(mxch>maxs) maxs=mxch;
    }
    cout<<maxs;

}