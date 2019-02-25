#include <iostream>
using namespace std;

int main()
{
    cout << "Enter a number to check odd or even" << endl;
    int x;
    cin >>x;
    x%2==0? cout<<"Even ":cout<<"Odd " ;
    
    int y= x%3==2?5:10;
    cout <<endl<< y<< endl;
    return 0;
    
}
