#include <iostream>
using namespace std;

int main()
{
    char ch;
    cin >> ch;
    
    switch(ch) {
        case 'm':
        case 'M': cout << "Monday" << endl;
                  break;
        case 't': 
        case 'T': cout << "Tuesday" << endl;
                  break;
        case 'w': 
        case 'W': cout << "Wednesday" << endl;
                  break;
        case 'f': 
        case 'F': cout << "Friday" << endl;
                  break;
        case 'su':  // this won't work, because case does not take string inputs/multi-character constants
        case 'Su': cout << "Sunday" << endl;
                  break;
        default: cout << "Enter valid character" << endl;
                  break;
    }
    
    return 0;
}