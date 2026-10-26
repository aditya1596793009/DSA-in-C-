#include <iostream>
#include <stack>
using namespace std;
stack<int> pushAt(int n, int val,stack<int>& st){
    stack<int> helper;
    int len = st.size();
    for(int i=0; i<len-n; i++){
        helper.push(st.top());
        st.pop();
    }
    st.push(val);
    while(helper.size() > 0){
        st.push(helper.top());
        helper.pop();
    }
    return st;
}
stack<int> popAt(int n,stack<int>& st){
    stack<int> helper;
    int len = st.size();
    for(int i=1; i<len-n; i++){
        helper.push(st.top());
        st.pop();
    }
    st.pop();
    while(helper.size() > 0){
        st.push(helper.top());
        helper.pop();
    }
    return st;
}
void getAt(int n,stack<int>& st){
    stack<int> helper;
    int len = st.size();
    for(int i=1; i<len-n; i++){
        helper.push(st.top());
        st.pop();
    }
    cout<<st.top()<<endl;
    while(helper.size() > 0){
        st.push(helper.top());
        helper.pop();
    }
    return;
}
void print(stack<int>& st){
    stack<int> helper;
    while(st.size() > 0){
        cout<<st.top()<<" ";
        helper.push(st.top());
        st.pop();
    }
    while(helper.size() > 0){
        st.push(helper.top());
        helper.pop();
    }
    cout<<endl;
}
void printRev(stack<int>& st){
    stack<int> helper;
    while(st.size() > 0){
        helper.push(st.top());
        st.pop();
    }
    while(helper.size() > 0){
        cout<<helper.top()<<" ";
        st.push(helper.top());
        helper.pop();
    }
    cout<<endl;
}
int main(){
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    cout<<st.top()<<endl;
    cout<<st.size()<<endl;
    print(st);
    printRev(st);

    stack<int> st1 = pushAt(2,60,st);
    print(st1);
    st1 = popAt(2,st1);
    print(st1);
    getAt(2,st1);
}
