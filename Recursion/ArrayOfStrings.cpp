#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main(){
    vector<string> arr={"raghav","yash","manish","arman","shubham"};
    cout<<arr[2][3]<<endl;
}
class Solution {
  public:
    int add(vector<int>& arr){
        int sum=0;
        for(int i=0; i<arr.size(); i++){
            sum+=arr[i];
        }
        return sum;
    }
    void sum(int idx,vector<int> ans,vector<int>& arr,vector<int>& sm){
        if(idx==arr.size()) sm.push_back(sum(ans));
        sum(idx+1,ans,arr,sm);
        
        ans.push_back(arr[idx]);
        sum(idx+1,ans,arr,sm);
    }
    vector<int> subsetSums(vector<int>& arr) {
        // code here
        vector<int> ans;
        vector<int> sm;
        sum(0,ans,arr,sm);
        return sm;
    }
};