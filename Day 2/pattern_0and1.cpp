#make pattern according to input

#1
#01
#101
#0101
#10101

#include<iostream>
using namespace std;

int main()
{
    int i, j, n, out;
    cin >> n;
    
    for (i=1; i<=n; i++)
    {
        for (j=0; j<i; j++)
        {
            out = (i+j)&1;
            cout << out;
        }
        cout << endl;
    }
}
