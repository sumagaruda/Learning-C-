#include<iostream>
using namespace std;

bool is_sorted(int a[], int n)
{
    if (n==0 || n==1)
    {
        return true;
    }
    
    int small_array[100];
    for (int i=1; i<n;i++)
    {
        small_array[i-1] = a[i];
    }
    
    bool issmall_sorted = is_sorted(small_array, n-1);
    
    if (a[0] < a[1] && issmall_sorted)
    {
        return true;
    }
    else
    {
        return false;
    }
}


int main()
{
    int a[] = {1,3,4,5,7,8};
    int n=6;
    if (is_sorted(a,n))
    {
        cout << "Array is sorted" << endl;
    }
    else
    {
        cout << "Unsorted array" << endl;
    }
    return 0;
}