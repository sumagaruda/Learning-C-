#include <iostream>
using namespace std;

int main()
{
    cout << "Enter temperature in fahrenheit";
    int f;
    float c;
    cin >>f;
    
    c = ((f-32)*5.0)/9;
    cout << "The temperature in celsius is " << c;
}