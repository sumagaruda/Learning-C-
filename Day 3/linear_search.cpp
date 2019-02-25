#include <iostream>
using namespace std;

int main()
{
   int n,key,i;
   cout << "Enter size of array" << endl;
   cin >> n;
   
   int a[100] = {0};
   cout << "Enter numbers to be stored in array" <<endl;
   
   for (i=0; i< n; i++)
   {
       cin >>a[i];
   }
   
   cout<< "Enter the element to be searched"<<endl;
   cin >>key;
   
   for (i=0; i< n; i++)
   {
       if (key == a[i])
       {
           cout << "Found at " << i+1 << " position";
           break;
       }
   }
   if (i==n)
   {
       cout << " Not found !"<<endl;
   }
   
   return 0;
}