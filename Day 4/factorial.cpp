#include<iostream>
using namespace std;

int fact(int n)
{
    int ans=1;
    for (int i=1; i<=n; i++)
    {
        ans = ans*i;
    }
    return ans;
}

int ncr (int n2, int r)
{
    return (fact(n2)/(fact(n2-r)* fact(r)));
}

int main()
{
    int n;
    cout << "Enter n, for factorial" << endl;
    cin >> n;
    
    cout << fact(n) << endl;
    
    int n2,r;
    cout<< "Enter n and r for nCr" <<endl;
    cin >> n2>>r;
    
    cout << ncr(n2,r) << endl;
}