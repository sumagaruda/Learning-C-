#include <iostream>
#include <cstring>
#include <cstdio>
using namespace std;

int main()
{
    float f = 2.12;
    printf("%.4f",f);  //Learning basic type formats
    
    char a[100], b[100];
    
    cin >> a >> b;  //Learning to take character input
    
    cout << a << " " << b <<endl;
    
    cout << strlen(a) << endl; 
    cout << strlen(b) << endl;
    
    return 0;
}
