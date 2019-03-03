#include <iostream>
#include <cstring>
using namespace std;

//Define your blueprint - class
class Car {
    public:
        float price;
        char name[20];
        char color[20];
        int model_no;
        
    Car()
    {
        cout << " In Constructor " << endl;
    }
    
    Car (char *n)
    {
       strcpy(name,n);
       price =0;
       strcpy(color, "Black");
       model_no=0;
    }
    
    //Parameterized Constructor
    Car(float p, char *n, char *clr, int m)
    {
        price = p;
        strcpy(name,n);
        strcpy(color, clr);
        model_no = m;
    }
    
    void read()
    {
        cout << " Enter price, name, color and Model:" << endl;
        cin >> price;
        cin >> name;
        cin >> color;
        cin >> model_no;
    }
    
    void print()
    {
        cout << "Name : " << name << endl;
        cout << "Color : " << color << endl;
        cout << "Price : "  << price << endl;
        cout << "Model number : " << model_no << endl; 
    }
};

int main()
{
    Car A(200, "BMW", "Blue", 101);
    A.print();
    
    Car B("Audi");
    B.print();
    
    Car C;
    C.price = 100;
    strcpy(C.name, "Maruti");
    C.color[0] = 'R';
    C.color[1] = 'E';
    C.color[2] = 'D';
    C.color[3] = '\0';
    C.model_no = 400;
    C.print();
    return 0;
}