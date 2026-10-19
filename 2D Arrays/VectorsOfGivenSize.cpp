#include <iostream>
#include <vector>
using namespace std;
int main(){
    int m,n;
    cout<<"Enter no. of rows and columns: ";
    cin>>m>>n;
    vector<vector<int>> v(m,vector<int>(n,0));
    for(int i=0; i<v.size(); i++){
        for(int j=0; j<v[i].size(); j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
}