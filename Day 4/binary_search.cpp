#include <iostream>
using namespace std;

int binary_search(int a[], int n, int key)
{
    int s = 0;
    int e = n-1;
    
    while (s <= e)
    {
        int mid = (s+e)/2;
        if (a[mid] == key)
        {
            return mid;
        }
        else if (a[mid] > key)
        {
            e = mid-1;
        }
        else
        {
            s = mid+1;
        }
    }
    return -1;
}

int main()
{
    int n, a[100] = {0}, key;
    cout << "Enter number of elements" << endl;
    cin >> n;
    
    cout << " Enter elements of array" << endl;
    for (int i=0; i<n; i++)
    {
        cin >> a[i];
    }
    
    cout << "Enter key to be found" << endl;
    cin >> key;
    int ans = binary_search(a, n, key);
    if (ans == -1)
    {
        cout << "Not found" << endl;
    }
    else
    {
        cout << "Found at index " << ans+1 << endl;
    }
}