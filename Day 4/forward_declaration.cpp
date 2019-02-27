#include <iostream>
using namespace std;

#define HI(x) sayhi(x)
#define sum(a,b) cout << a+b << endl;

void sayhi(int x);

int main()
{
   HI(5);
   sum(5,5);
}

void sayhi(int x)
{
    cout << "Hi" << endl;
}