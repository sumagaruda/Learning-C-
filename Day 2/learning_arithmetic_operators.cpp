#include <iostream>
using namespace std;

int main()
{
    int x = 1;
    
    cout << x << endl;
    cout << x++ << endl;
    cout << ++x << endl;
    
    if ((x%2 == 0) || (x%5== 0))
    {
        cout << "Just testing the or";
        x= x+2;
    }
    else
    {
        cout <<"We'll just add 3"<< endl;
        x = x+3;
    }
    
    cout << x << endl;
    return 0;
}
