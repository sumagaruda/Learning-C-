#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    int n;
    char str[10][100];
    
    cin>>n;
    cin.get();
    
    for (int i=0; i<n ;i++)
    {
        cin.getline(str[i], 100);
    }
    
    char fruit[100];
    cout << "Enter a fruit";
    cin.get();
    cin.getline(fruit, 100);
    
    int i;
    for (i=0; i<n;i++)
    {
        if (strcmp(str[i],fruit) == 0)
        {
            cout << "Found at index " <<i << endl;
            break;
        }
    }
    if (i==n)
    {
        cout << "Not found";
    }
    return 0;
}