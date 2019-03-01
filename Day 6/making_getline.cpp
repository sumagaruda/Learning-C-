#include <iostream>
using namespace std;

void readline(char *a , int max_size, char delim = '\n')
{
    int i=0;
    char ch;
    ch = cin.get();
    while (ch!=delim)
    {
        a[i] = ch;
        i++;
        if (i==max_size)
        {
            break;
        }
        ch = cin.get(); //can get white space characters amd you can specify the size
    }
    a[i] = '\0';
}

int main()
{
    char a[10];
    readline(a,10);
    
    char b[100];
    readline(b,100, '.');
    
    cout << a << endl;
    cout << b << endl;
}
