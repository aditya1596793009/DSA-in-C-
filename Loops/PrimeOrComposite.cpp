#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    bool flag = false;
    for(int i=2; i*i<=n; i++){
        if(n%i==0){
            flag=true;
            break;
        }
        
    }
    if(n==1) cout<<"Neither Prime Nor Composite";
    else if(flag==true) cout<<"Composite number";
    else cout<<"Prime Number";
}
// int main(){
//     int i;
//     while (i=10){
//         cout << i << endl;
//         i++;
//     }
// }

// int main(){
//     int t=10;
//     while(t/=2){
//         cout<<"Hello"<<endl;
//     }
// }

// int t=4;
// while(t--){
//     cout<<"Hello"<<endl;
// }