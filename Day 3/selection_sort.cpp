#include <iostream>
using namespace std;

//selection sort - repeatedly finding min. element in unsorted part and putting it at the beginning

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
   
   int min;
  for (int i= 0; i<n-1; i++)
  {
      min = i;
      for (int j=i+1; j<n; j++)
      {
          if (a[j] < a[min])
          {
              min = j;
          }
      }
      swap(a[min], a[i]);
  }
  
  for (int i=0; i<n; i++)
   {
       cout << a[i] << " ";
   }
   
   return 0;
}
