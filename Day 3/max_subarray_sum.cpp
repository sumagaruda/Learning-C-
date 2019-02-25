#include <iostream>
using namespace std;

//Maximum subarray sum - for array with -ve numbers

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
   
   int max_sum=0, c_sum=0;
   
   for (int i=0; i<n;i++)
   {
       c_sum = c_sum + a[i];
       if (c_sum <0)
      {
       c_sum = 0;
      }
       
       if (c_sum > max_sum)
       {
       max_sum = c_sum;
       }
   }
   
   cout << "Max sum is "<<max_sum << endl;
   return 0;
}