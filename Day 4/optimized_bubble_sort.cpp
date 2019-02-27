#include <iostream>
using namespace std;

int bubble_sort (int a[], int n)
{
    for (int i=0; i<n; i++)
    {
        bool is_sorted = true;
        for (int j= 0; j< n-1-i; j++)
        {
            if (a[j] > a[j+1])
         {
            swap(a[j],a[j+1]);
            is_sorted = false; // more than one pass without change, array is is_sorted
                               // and we can return
         }
        }   
        
        if (is_sorted)
        {
            break;
        }
    }
}

int main()
{
    int n,a[100] = {0};
    cout << "Enter n" << endl;
    cin >> n;
    
    cout << "Enter elements of the array" << endl;
    for (int i=0; i<n ;i++)
    {
        cin >> a[i];
    }
    
    bubble_sort(a,n);
    
    for (int i=0; i<n ;i++)
    {
        cout << a[i] << " ";
    }
}