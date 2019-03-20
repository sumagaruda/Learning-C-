#include<iostream>
#include<cstring>
using namespace std;

class Book{
    
    public:
    int price;
    char name[20];
    
    Book(int p, char *n)
    {
        price =p;
        strcpy(name,n);
    }
};

ostream& operator<<(ostream &os, Book &b)
{
    cout << "Book Name" << b.name<<endl;
    cout << "Book Price" << b.price << endl;
    return os;
}