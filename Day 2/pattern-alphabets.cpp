#pattern

#eg. for 5
# ABCDEEDCBA
# ABCDDCBA
# ABCCBA
# ABBA
# AA

#include <iostream>
using namespace std;

int main()
{
    cout << "Enter value for pattern" << endl;
    int n;
    cin >> n;

    for (int i=0; i<n; i++)
    {
        char ch ='A';
        for (int j=0; j<n-i; j++)
        {
            cout << ch;
            ch = ch+1;
        }
        
        ch = ch-1;
        for (int j=0; j<n-i; j++)
        {
            cout << ch;
            ch = ch-1;
        }
        cout << '\n';
    }
    return 0;
}