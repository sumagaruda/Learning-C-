#include<iostream>
using namespace std;

int main(){

    for (int i=1; i<=10;)
    {
        if (i%5 == 0)
        {
            continue;
        }
        cout << i<< endl;
        i++;
    }

return 0;
}