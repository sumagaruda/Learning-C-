#include <iostream>
using namespace std;

int main()
{
    int a[100] = {0}, b[100] = {0}, m , n;
    cout << "Enter no. of elements in first array" << endl;
    cin >> m;
    
    cout << "Enter elements of first array" << endl;
    for (int i=0; i<m ; i++)
    {
        cin >> a[i];
    }
    
    cout << "Enter no. of elements in second array" << endl;
    cin >> n;
    
     cout << "Enter elements of second array" << endl;
    for (int j=0; j<n ; j++)
    {
        cin >> b[j];
    }
    
    int i= m-1;
    int j= n-1;
    int k= m+n-1;
    int c[200] = {0};
    
    while (i>=0 && j>=0)
    {
        if (a[i] > b[j])
        {
            c[k] = a[i];
            k--;
            i--;
        }
        else
        {
            c[k] = b[j];
            k--;
            j--;
        }
    }
    
    while (i>=0)
    {
        c[k] = a[i];
        k--;
        i--;
    }
    
     while (j>=0)
    {
        c[k] = b[j];
        k--;
        j--;
    }
    
    cout << "Merged array";
    for (int l = 0; l<m+n; l++)
    {
        cout << c[l] << "  ";
    }
    
}