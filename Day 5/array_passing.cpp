
#include <iostream>
using namespace std;

int print_array(int *a, int n)
{
    cout << "In function " << endl;
    int sum=0;
    
    for (int i=0; i<n ;i++)
    {
        sum += a[i];
        cout << *(a+i) << endl;
    }
    return sum;
}

int main()
{
    int *ptr;
    int a[100] = {1,2,3,4,5};
    
    cout << "sum is " << print_array(a,5);
}