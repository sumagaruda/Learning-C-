/******************************************************************************

                              Online C++ Compiler.
             

#include <iostream>
using namespace std;

class Node{
  public:
  int data;
  Node *next;
  Node(int d): data(d), next(NULL){};
};

void addatfront(int d, Node *&head)
{
    if (head == NULL)
    {
        head = new Node(d);
    }
    
    else{
        Node *n = new Node(d);
        n->next = head;
        head = n;
    }
}

void takeinput(Node *&head)
{
    int d;
    cin>>d;
    while (d != -1)
    {
        addatfront(d, head);
        cin>>d;
    }
}

void reverse(Node *&head)
{
    if (head == NULL || head->next == NULL)
    {
        return;
    }
    
    Node *prev = NULL;
    Node *current = head;
    Node *next;
    
    while (current!=NULL)
    {
        next = current->next;
        current->next = prev;
        
        prev = current;
        current = next;
    }
    head = prev;
}

Node *getmid(Node*head){
    if (head == NULL || head->next == NULL)
    {
        return head;
    }
    
    Node *fast = head->next;
    Node *slow = head;
    
    while (fast && fast->next)
    {
        fast = fast->next->next;
        slow = slow->next;
    }
    return slow;
}

Node *merge(Node *a, Node *b)
{
    if (a==NULL)
    {
        return b;
    }
    
    if (b==NULL)
    {
        return a;
    }
    
    Node *newHead;
    if (a->data < b->data)
    {
        newHead = a;
        newHead->next = merge(a->next,b);
    }
    else
    {
        newHead = b;
        newHead->next = merge(a, b->next);
    }
}

int getLength(Node *head)
{
    int l=0;
    while(head)
    {
        l++;
        head =head->next;
    }
    return l;
}

void print(Node *head)
{
    while (head!=NULL)
    {
        cout << head->data << "--> ";
        head = head->next;
    }
    cout << endl;
}

Node* mergeSort(Node*head){
 if (head == NULL || head->next == NULL)
 {
     return head;
 }
 
 //Recursive case
 //Divide into 2 parts
 Node *mid = getmid(head);
 Node *a = head;
 Node *b = mid->next;
 mid->next = NULL;
 
 //Recursively sort the 2 parts
 a=mergeSort(a);
 b=mergeSort(b);
 
 //Merge the 2 parts
 head = merge(a,b);
 return head;
}

void bubbleSort(Node *&head){
    int n = getLength(head);
    for(int i=0;i<=n-2;i++){
        Node*prev = NULL;
        Node*current  = head;
        Node*N;

        while(current!=NULL && current->next!=NULL){
            if(current->data > current->next->data){
                    if(prev==NULL){
                        N = current->next;
                        current->next = N->next;
                        N->next = current;
                        head = N;
                        prev = N;

                    }
                    else{
                            N = current->next;
                            current->next = N->next;
                            N->next = current;
                            prev->next = N;
                            prev = N;
                    }


            }
            else{
                prev = current;
                current = current->next;

            }
        }
    }
}

int main()
{
    Node *head = NULL;
    takeinput(head);
    print(head);
    reverse(head);
    print(head);
    head = mergeSort(head);
    print(head);
    
}