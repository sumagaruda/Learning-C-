#ifndef NODE_H
#define NODE_H

template<typename T>

class Node{
    public:
    T data;
    Node<T>* next;
    
    Node(T d): data(d), next(NULL){}
};
#endif //NODE_H