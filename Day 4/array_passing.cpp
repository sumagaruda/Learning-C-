#include <iostream>
using namespace std;

void print_array(int a[], int n)
{
    for (int i=0; i<n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}

void update_array(int a[], int n)
{
    for (int i=0; i<n; i++)
    {
        a[i] = i*i;
    }
}

int main()
{
    int a[100]= {1,2,3,4,5,6,7,8};
    
    print_array(a,10);
    update_array(a,10);
    print_array(a,10);
    
}
