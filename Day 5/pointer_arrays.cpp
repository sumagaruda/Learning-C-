#include<iostream>
using namespace std;

int main()
{
     int x = 10;
     int *p1 = &x;
     cout << p1 << endl;
     cout << sizeof(p1) << endl;
     
     int a[10] = {1,2,3,4,5};
     cout << a << endl;
     cout << sizeof(a) << endl;
     
     p1 = a;
     cout << *p1 << endl;
     cout << *a << endl;
     
     //a = p1; can't assign int * to int[10]
     //cout << *a << endl;
     
     for (int i=0; i<5; i++)
     {
      cout << *(a+i) << endl;  
     }
     
return 0;
}