# Pattern
#1
#2 3 
#4 5 6
#7 8 9 10
#11 12 13 14 15

#include <iostream>
using namespace std;

int main()
{
    int i=1, n, j, val=1;
    cin >> n;
    
    while (i<=n)
    {
        j=1;
        while (j<=i)
        {
           cout << val << " ";
           val++;
           j++;
        }
        cout << endl;
        i++;
    }
}


