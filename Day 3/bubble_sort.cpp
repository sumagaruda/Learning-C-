#include <iostream>
using namespace std;

//bubble sort - repeatedly swap adjacent numbers till you're sorted

int main()
{
   int n;
   cout << "Enter n";
   cin>>n;
   
   int a[100]= {0};
   for (int i=0; i<n; i++)
   {
       cin >>a[i];
   }
   
  for (int i= 0; i<n-1; i++)
  {
      for (int j=0; j<n-1-i; j++)
      {
          if (a[j] > a[j+1])
          {
              swap(a[j], a[j+1]);
          }
      }
  }
  
  for (int i=0; i<n; i++)
   {
       cout << a[i] << " ";
   }
  
   return 0;
}
