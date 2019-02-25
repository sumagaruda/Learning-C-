#include <iostream>
using namespace std;

int main()
{
    cout << "Let's calculate Simple Interest" << endl;
    cout << "Enter principal, rate and time" << endl;
    float p, r, t;
    cin >> p >> r >> t;
    
    float si;
    si = p*r*t/100;
    cout << " Simple Interest is "<< si;
    return 0;
}
