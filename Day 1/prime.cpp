#include <iostream>
using namespace std;

int main()
{
    cout << "Enter digit and we will check if it is prime or not";
    int n;
    cin >> n;
    
    for (int i=2; i<n ; i++)
    {
        if (n%i == 0)
        {
            cout << n << " is not prime";
            return 0;
        }
    }
    
    cout << n << " is prime";
}
