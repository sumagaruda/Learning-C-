#include<iostream>
using namespace std;

int main()
{
    cout << "Enter any number";
    int n, count=0;
    cin >> n;
    
    for (;n>0; n= n>>1)
    {
        if (n&1 == 1)
        {
            count ++;
        }
    }
    
    cout << count;
    return 0;
}