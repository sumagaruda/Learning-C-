#ifndef STACK_H
#define STACK_H
#include<vector>
using namespace std;

template<typename T>;

class Stack{
    public:
    Node<T> *head;
    int count;
    
    Stack(){
        head = NULL;
        count = 0;
    }
    
    void push(const T d){
        Node<T> *n = new Node<T>(d);
        n->next = head;
        head = n;
        count++;
    }
    
    void pop(){
        Node<T> *temp = head;
        head = head->next;
        delete temp;
        count--;
    }
    
    T top() const{
        return head->data;
    }
    
    bool isEmpty() const{
        return head=NULL?true:false;
    }
    
    int size() const{
        return count;
    }
};

template <typename T>
class StackV{
    vector<T> v;
    
    public:
    StackV(){
    }
    
    void push(T d){
        v.push_back(d);
    }
    
    void pop(){
        v.pop_back();
    }
    
    T top(){
        return v[v.size()-1];
    }
    
    bool isEmpty() {
        return v.size()==0?true:false;
    }
    
    int size(){
        return v.size();
    }
    
    };
    
#endif
