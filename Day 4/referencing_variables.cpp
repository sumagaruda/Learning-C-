#include<iostream>
using namespace std;

int main()
{
    int a = 10;
    int &a1 = a; // a1 is declared as reference, it becomes an alternative name for the existing variable
                 // i.e. they both point to the same memory location
    a1++;
    a=2*a1;
    
    cout << a << endl;
    cout << a1 << endl;
}