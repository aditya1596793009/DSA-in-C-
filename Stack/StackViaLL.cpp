#include <iostream>
using namespace std;
class Node{
public:
    int val;
    Node* next;
    Node(int val){
        this->val = val;
        next = NULL;
    }
};
class MyStack{
private:
    Node* head;
    Node* tail;
    int length;
public:
    MyStack(){
        head = tail = NULL;
        length = 0;
    }
    void push(int val){
        Node* temp = new Node(val);
        temp->next = head;
        head = temp;
        length++;
    }
    void pop(){
        if(length==0) {
            cout<<"Stack is empty!"<<endl;
            return;
        }
        Node* tobedeleted = head;
        head = head->next;
        delete tobedeleted;
        length--;
    }
    int get(){
        if(length==0) {
            cout<<"Stack is empty!"<<endl;
            return 0;
        }
        return head->val;
    }
    int size(){
        if(length==0) {
            cout<<"Stack is empty!"<<endl;
            return 0;
        }
        return length;
    }
    void print(){
        Node* temp = head;
        while(temp!=NULL){
            cout<<temp->val<<" ";
            temp = temp->next;
        }
        cout<<endl;
        return;
    }
};
int main(){
    MyStack st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.print();
    st.pop();
    st.print();
    cout<<st.size()<<endl;;
}