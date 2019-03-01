#include<iostream>
#include <cstring>
using namespace std;

int main()
{
    char a[100], b[100];
    cin.getline(b,100);
    int i, j;
    
    while (b[j] != '\0')
    {
        a[i] = b[j];
        i++;
        j++;
    }
    
    a[i] = '?';
    
    cout << a << endl;
    cout << b << endl;
    
    return 0;
}