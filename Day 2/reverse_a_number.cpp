#include<iostream>
using namespace std;

int main()
{
   int n, rem;
   cout << "Enter a number to be reversed ";
   cin >> n;
   
   for (;n>0; n=n/10)
   {
       rem = n%10;
       cout << rem;
   }
   return 0;
}
