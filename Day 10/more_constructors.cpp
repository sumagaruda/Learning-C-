#include <iostream>
#include <cstring>
using namespace std;

class Car {
    
    public:
        char *name;
        int model_no;
        const int tyres;
        
    private:
        static int count;
        float price;
        
    public:
    
        Car():tyres(4)
        {
            cout << "In Constructor" << endl;
            name = NULL;
            model_no = 0;
            price = 0;
            count ++;
        }
        
        Car(char *n):tyres(4)
        {
            name = new char[strlen(n) + 1];
            strcpy(name, n);
            price =0;
            model_no =0;
            count ++;
        }
        
        static int get_count()
        {
            return count;
        }
        
        //Parameterized Constructor
        Car(float p, char *n, int m, int t=4):price(p),model_no(m),tyres(t)
        {
            name = new char[strlen(n) + 1];
            strcpy(name,n);
            count ++;
        }
        
        //Copy Constructor
        //Shallow copy made by default copy constructor
        //our task is to make a deep copy
        //new object is created from existing object
        //allocates separate memory to newly created target and source objects
        Car(Car &X):tyres(4)
        {
            price = X.price;
            model_no = X.model_no;
            name = new char[strlen(X.name) + 1];
            strcpy(name,X.name);
            count ++;
            cout << "In copy constructor of car " << name << endl;
        }
        
        //Copy assignment operator
        //an already initialized object is assigned a value from another existing object
        void operator=(Car &X)
        {
            price = X.price;
            name = new char[strlen(X.name)+1];
            strcpy(name, X.name);
            model_no = X.model_no;
        }
        
        void operator+ (Car &X)
        {
            price = price + X.price;
            model_no = model_no + X.model_no;
            int l1 = strlen(name);
            int l2 = strlen(X.name);
            char *oldname = name;
            name = new char[l1+l2+1];
            strcpy(name, oldname);
            delete [] oldname;
            strcpy(name+l1, X.name);
        }
        
        void read()
        {
            cout << "Enter price and model" << endl;
            cin >> price;
            cin >> model_no;
        }
        
        void print() const 
        {
            cout << name << endl;
            cout << price << endl;
            cout << model_no << endl;
        }
    
        ~Car()
        {
            //In Destructor
            cout << "Destroying car : " <<name << endl;
            delete [] name;
            name = NULL;
            count--;
        }
        
        //Setter
        void set_price(int np)
        {
            if (np > 2000)
            {
                price = np;
            }
            else
            {
                price = 2000;
            }
        }
        
        //Getter
        int get_price()
        {
            return price;
        }
};

ostream& operator<<(ostream &os, Car X)
{
    os << "Here is your car " << endl;
    os << X.name << endl;
    os << X.model_no << endl;
    os << X.get_price() << endl;
    
    return os;
}

int Car::count =0;

int main()
{
    Car A(100, "BMW", 1);
    
    //First way to call copy constructor
    Car B(200, "Audi", 80);
    
    //Second way
    Car C;
    C=A;
    
    //Copy Assignment operator
    Car D;
    D = A;
    D.name[0] = 'D';
    
    A.print();
    B.print();
    C.print();
    D.print();
    cout << Car :: get_count() << endl;
    
    Car *mydyncar = new Car(1000, "DynamicCar", 2017);
    (*mydyncar).print();
    cout << "count is " << Car::get_count() << endl;
    delete mydyncar;
    
    cout << "Hybrid Car" << endl;
    A+B;
    A.print();
    cout << A << B << endl;
    
    return 0;
}
