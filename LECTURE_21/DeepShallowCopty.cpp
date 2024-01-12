#include <iostream>
#include <cstring>
using namespace std;

class Car{
private:
    int secret;
    
public:
    char *name;
    int price, model, seats;

    //Default functions: ye already exist karte hai hum inhe replace kar sakte hai
    
    //1. Constructor

    //1.1 Default constructor
    Car()
    {
        name = NULL;
        
    }

    // 1.2 Parameterised constructor
    Car(char *n, int p, int s, int m)
    { 
        name = new char[strlen(n) + 1];     // this prevents giving extra space
        strcpy(name, n);
        price = p;
        seats=s;
        model=m;
    }

    // 2. Copy constructor
    // Car(Car &Y)
    // {
    //     name = new char[strlen(Y.name) + 1];
    //     cout << "I am copy instructor !!!!!\n";
    //     strcpy(name, Y.name);
    //     price =Y.price ;
    //     seats=Y.seats;
    //     model=Y.model;  
    // }




    // 3. Copy  Assignemnet operator
    void operator=(Car Y)
    {
        cout << "I am copy asignemnt operator\n";
        if (name != NULL)
        {
            delete[] name;
        }
        name = new char[strlen(Y.name) + 1];
        
        // name = new char[strlen(Y.name) +1]; 
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
    
    void setName(char *n)
    {
        if (name != NULL)
        {
            delete[] name;
        }
        name= new char[strlen(n) + 1] ;
        strcpy(name, n);
    }

};

int main()
{
    Car A;
    char k[100] = "BMW";
    A.setName(k);
    // strcpy(A.name, "masood");   //A null hai and aap usme value daalna chah rhe ho to seg fault 
    // to avoid this set name ka function banana padega
    A.price = 100000;
    A.model = 2020;
    A.seats = 4;
    A.print();

    Car B;
    B.setName("Audi");
    B.price = 233;
    B.model = 2025;
    B.seats = 6;

    Car C = A;

    C.setName("name changed");
    A.print();
    B.print();
    C.print();
}
     