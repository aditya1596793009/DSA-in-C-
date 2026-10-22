#include <iostream>
using namespace std;
class Node{ // User defined Data Type
public:
    int val;
    Node* next;
    Node(int val){
        this->val=val;
        next = NULL;
    }
};

class MyLinkedList{
private:
    Node* head;
    Node* tail;
    int length;
public:
    MyLinkedList(){
        head = tail = NULL;
        length = 0;
    }

    void display(){
        Node* temp = head;
        while(temp != NULL){
            cout<<temp->val<<" ";
            temp = temp->next;
        }
        cout<<endl;
    }

    void insertAtTail(int val){
        Node* n = new Node(val);
        if(length == 0) head = tail = n;
        else {
            tail->next = n;
            tail = n;
        }
        length++;
    }

    void insertAtHead(int val){
        Node* n = new Node(val);
        if(length==0) head = tail = n;
        else {
            n->next = head;
            head = n;
        }
        length++;
    }

    void deleteAtHead(){
        if(length==0) {
            cout<<"List is empty!"<<endl;
            return;
        }
        Node* toBeDeleted = head;
        head=head->next;
        delete toBeDeleted;
        length--;
    }

    int size(){
        return length;
    }

    void get(int idx){
        Node* temp = head;
        for(int i=0; i<idx; i++){
            temp = temp->next;
        }
        cout<<temp->val<<endl;
    }

    void add(int idx,int val){
        Node* n = new Node(val);
        Node* temp = head;
        for(int i=0; i<idx-1; i++){
            temp = temp->next;
        }
        n->next = temp->next;
        temp->next = n;
        length++;
    }

    void remove(int idx){

        Node* temp = head;
        for(int i=0; i<idx-1; i++){
            temp = temp->next;
        }
        Node* toBeDeleted = temp->next;
        temp->next = temp->next->next;
        if(idx == length-1) tail = temp;
        delete toBeDeleted;
        length--;
    }
};

int main(){
    MyLinkedList list;
    list.insertAtTail(20);
    list.insertAtTail(30);
    list.insertAtTail(40);
    list.insertAtHead(10);

    list.display();

    list.deleteAtHead();
    list.display();
    cout<<list.size()<<endl;

    list.insertAtHead(10);
    list.display();
    cout<<list.size()<<endl;

    list.get(3);

    list.add(3,5);
    list.display();

    list.remove(2);
    list.display();

    list.remove(3);
    list.display();
}
