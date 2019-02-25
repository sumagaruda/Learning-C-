#include <iostream>
using namespace std;

int main()
{
    char ch,a[100];
    int count =0;
    cin >> a;
    cout << a <<endl;
    
    cin.get(); //discards the newline character put after every new input
    ch = cin.get(); // reads a string i.e. even with space characters
    //also helps us specify the no.of characters that can be taken as input so as to avoid buffer overflow attacks

    while (ch!='$')
    {
        count++;
        ch = cin.get();
    }
    
    cout << count<< endl;
    return 0;
}
