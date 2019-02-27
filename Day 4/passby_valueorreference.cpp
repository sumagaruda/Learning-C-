#include <iostream>
using namespace std;

void myswap_passbyvalue(int a, int b)
{
    int temp =a;
    a=b;
    b=temp;
    
    cout << "Pass by value result:" << endl;
    cout << a << "  " << b << endl;
}

void myswap_passbyreference(int &a, int &b) // the change is made in the memory address of the variables
{
    int temp =a;
    a=b;
    b=temp;
    
    cout << "Pass by reference result:" << endl;
    cout << a << "  " << b << endl;
}
int main()
{
    int a=5, b=10;
    myswap_passbyvalue(a,b); // we can't use swap(a,b) because it is an inbuilt function
    cout << "In main function, after pass by value" << endl;
    cout << a << "  " << b << endl;
    
    myswap_passbyreference(a,b); 
    cout << " In main function, after pass by reference" << endl;
    cout << a << "  " << b << endl;
}