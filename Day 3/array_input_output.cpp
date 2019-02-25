#include <iostream>
using namespace std;

int main()
{
    int a[100] = {0};
    cout << "Enter 5 numbers to be stored in an array";
    //Take an input of 5 numbers
    for (int i=0; i<5; i++)
    {
        cin >>  a[i];
    }
    
    //Print the array in reverse order
    for (int i=4; i>=0; i--)
    {
        cout << a[i] << " ";
    }
    
    return 0;
}