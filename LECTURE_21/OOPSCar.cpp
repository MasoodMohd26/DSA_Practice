#include <iostream>
#include <cstring>
using namespace std;

class Car{
private:
    int secret;
    
public:
    char name[100];
    int price, model, seats;

    //Default functions: ye already exist karte hai hum inhe replace kar sakte hai
    
    //1. Constructor

    //1.1 Default constructor
    Car()
    {
        
    }

    // 1.2 Parameterised constructor
    Car(char *n, int p, int s, int m)
    {
        strcpy(name, n);
        price = p;
        seats=s;
        model=m;
    }

    // 2. Copy constructor
    Car(Car &Y)
    {
        cout << "I am copy instructor !!!!!\n";
        strcpy(name, Y.name);
        price =Y.price ;
        seats=Y.seats;
        model=Y.model;  
    }




    // 3. Copy  Assignemnet operator
    void operator=(Car Y)
    {
        cout << "I am copy asignemnt operator\n";
        strcpy(name, Y.name);
        price =Y.price ;
        seats=Y.seats;
        model=Y.model;
    }

    // 4. Destructor
    ~Car()
    {
        cout << name << " destructed \n";  
    }
     

    void print()
    {
        // cout << name << " " << price << " " << model << " " << seats << endl;
        cout << "Name: " << name << endl;
        cout << "Price: " << price << endl;
        cout << "Model: " << model << endl;
        cout<<"Seats:"<<seats<<endl;
    }

};

int main()
{
    Car A;
    strcpy(A.name, "masood");
    A.price = 100000;
    A.model = 2020;
    A.seats = 4;
    A.print();

    char a[100];
    strcpy(a, "Bhugati");
    Car B(a, 20000, 2025, 7);
    B.print();

    Car X = B;
    X.print();  

    X=A;

}
     