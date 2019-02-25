#include <iostream>
using namespace std;

int main()
{
    int a;
    a=5;
   //Learning to take input
   int b;
   cout << " Enter another value";
   cin >> b;
   
   cout << a*a << endl;
   cout << b*b*b <<endl;
   
   cout << "Hello!" << "\n";
   
   //creating expressions and assignment statements
   int value = (a+b)*8;
   cout << value << endl;
   
   //conditional execution
   if (value%3 == 0)
   {
       cout << "Yes, it is divisible by 3" << '\n';
   }
   else {
       cout << "No, it isn't divisible by 3" << '\n';
   }
   
   //Finding squares
   int i=1;
   while (i<10)
   {
       cout << i*i << " ";
       i=i+1;
   }
   
    return 0;
}