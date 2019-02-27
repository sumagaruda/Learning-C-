#include<iostream>
using namespace std;

void say_hi()
{
    cout << " Hiiii" << endl;
    return;
}

int square(int n)
{
    return n*n;
}

int sum (int a, int b)
{
    cout << a+b << endl;
}

int main()
{
    say_hi();
    cout << square(5) << endl;
    cout << sum(5,4) << endl;
    return 0;
}
