#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main(){
    string st = "Aditya";
    st.push_back('k');
    cout<<st<<endl;
    sort(st.begin(),st.end());
    cout<<st<<endl;
}