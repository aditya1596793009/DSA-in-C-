#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
    string s = "aaaazzcccdaa";
    int n = s.length();
    vector<char> ans;
    int i=0, j=0;
    while(j<n){
        if(s[i]==s[j]) j++;
        else{
            ans.push_back(s[i]);
            char c = (j-i)+48;
            ans.push_back(c);
            i=j;
        }
    }
    ans.push_back(s[i]);
    char c = (j-i)+48;
    ans.push_back(c);
    int m = ans.size();
    for(int i=0; i<m; i++){
        cout<<ans[i];
    }
}