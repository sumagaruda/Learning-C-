#include <iostream>
using namespace std;

int main()
{
    int x=10, y;
    
    int *xptr = &x;  //xptr is a pointer to int
    cout << xptr << endl; // xptr now has address of x
    cout << &x << endl;  //just to verify that xptr is same
    cout << *xptr << endl; //checking derefencing
    cout << &xptr << endl; //address of xptr
    cout << *(&xptr) << endl; //derefencing address of xptr
    cout << *(&x) << endl;
    
    y = *xptr + 1; //derefencing, y is assigned the value found at *xptr and then added with 1
    cout << y<< endl;
    
    int z= *(xptr+3); // some garbage value at (address of x+3)
    cout << z << endl;
    
    char ch = 'a';
    int *ptr = (int*) &ch; //typecast address of ch into int
    cout << ptr << endl; //address of ch
    cout << ch << endl; //a
    cout << (char)*ptr << endl; //a - value at ptr
    cout << *ptr << endl; //some int value, since ptr is defined to be of type int
    
    return 0;
}