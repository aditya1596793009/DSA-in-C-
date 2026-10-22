#include <iostream>
using namespace std;
class MyVector{
private: 
    int cap;
    int length;
    int* arr;
public:
    MyVector(int capacity,int default_value){
        arr = new int[capacity];
        cap = capacity;
        length = capacity;
        for(int i=0; i<capacity; i++){
            arr[i]=default_value;
        }
    }

    int size(){
        return length;
    }

    int capacity(){
        return cap;
    }

    void pop_back(){
        if(length==0){
            cout<<"Vector is empty!"<<endl;
        }
        length--;
    }

    void push_back(int val){
        if(length==cap){
            cap=2*cap;
            int* temp = new int[cap];
            for(int i=0; i<length; i++){
              temp[i]=arr[i];  
            }
            delete[] arr;
            arr=temp;
        }
        arr[length++]=val;
    }

    int get(int idx){
        if(idx<0 || idx>length){
            cout<<"Invalid index!"<<endl;
            return -1;
        }
        return arr[idx];
    }

    void set(int idx, int val){
        if(idx<0 || idx>length) {
            cout<<"Invalid index!"<<endl;
            return;
        }
        arr[idx]=val;
    }

    void print(){
        for(int i=0; i<length; i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};
int main(){
    MyVector v(5,-1);
    v.print();
    cout<<v.size()<<endl;
    v.pop_back();
    v.print();
    v.push_back(10);
    v.print();
    cout<<v.get(3)<<endl;
    v.set(3,100);
    v.print();
}