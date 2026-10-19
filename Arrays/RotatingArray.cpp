#include <iostream>
#include <vector>
using namespace std;
void reverse(vector<int>& v, int i, int j){
   while(i<j){
      swap(v[i],v[j]);
      i++;
      j--;
   }
}
void print(vector<int>& v){
   for(int ele : v){
      cout<<ele<<" ";
   }
}
int main(){
   int k=3;
   vector<int> arr = {10,20,30,40,50,60,70};
   int n=arr.size();
   print(arr);
   cout<<endl;
      reverse(arr,0,n-1);
   print(arr);
   cout<<endl;
      reverse(arr,0,k-1);
   print(arr);
   cout<<endl;
      reverse(arr,k,n-1);
   print(arr);
}
