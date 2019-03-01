#include<iostream>
using namespace std;

//takes time proportional to N
int power(int x, int n)
{
    if (n==0)
    {
        return 1;
    }
    return x*power(x,n-1);
}

int fast_power(int x, int n)
{
   if (n==0)
   {
       return 1;
   }
   
   if (n&1)
   {
       return x*fast_power(x,n-1);
   }
   
   else
   {
       int x_sq = fast_power(x,n/2);
       return x_sq*x_sq;
   }
}

int main()
{
    int x, n;
    cout << "Enter number" << endl;
    cin >> x;
    cout << "Enter power" << endl;
    cin >> n;
    
    cout << power(x,n) << endl;
    cout <<fast_power(x,n) << endl;
    return 0;
}