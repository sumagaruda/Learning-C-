#include <iostream>
using namespace std;

int main()
{
    char ch;
    
    int sc = 0; //space character
    int a = 0; //alphabet character
    int d = 0; //digit
    int others =0;
    
    ch = cin.get();
    
    while (ch!='$')
    {
        if (ch==' ' || ch == '\n')
        {
            sc++;            
        }
        else if ((ch >= 'A' && ch <='Z') || (ch >= 'a' && ch <='z'))
        {
            a++;
        }
        else if (ch >='0' && ch <='9')
        {
            d++;
        }
        else
        {
            others++;
        }
        
        ch = cin.get();
    }
    
    cout << "Spaces : " << sc << endl;
    cout << "Alphabets : " << a << endl;
    cout << "Digits : " << d << endl;
    cout << "Others : " << others << endl;
 return 0;
}
