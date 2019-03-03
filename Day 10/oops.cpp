#include<iostream>
using namespace std;

void bubble_sort(int a[], int n)
{
    if (n==1)
    {
        return;
    }
    
    for (int j=0; j<n-1; j++)
    {
        if (a[j] > a[j+1])
        {
            swap(a[j], a[j+1]);
        }
    }
    bubble_sort(a,n-1);
}

int main()
{
    int a[] = {1,5,3,7,4,2};
    bubble_sort(a,6);
    
    for (int i=0; i<6; i++)
    {
        cout << a[i] << " ";
    }
}