// Copy	Assignment	Operator
//Shallow Copy Constructor

#include <iostream>
#include <cstring>
using namespace std;

class Car{
    private:
        int price;
    public:
        int model_no;
        char *name;

    // Constructor
    Car(){
        name = NULL;
        cout << "Beginning" << endl;
    }
    // Constructor with Parameters
    Car(int p, int mn, char *n){
        price = p;
        model_no = mn;
        int l = strlen(n);
        name = new char[l + 1];
        strcpy(name, n);
    }
    // Deep Copy Constructor
    Car(Car &c){
        price = c.price;
        model_no = c.model_no;
        name = new char[strlen(c.name) + 1];
        strcpy(name, c.name);
    }

    void operator = (Car &X){
        cout << "You are in Copy Constructor" << endl;
        price = X.price;
        model_no = X.model_no;
        name = new char[strlen(name)+1];
        strcpy(name, X.name);
    }


    void setName(char *n){
        if(name == NULL){
            name = new char[strlen(n) + 1];
            strcpy(name, n);
        }
        else{
            //Later
        }
    }
    void start(){
        cout << "Starting" << endl;
    }
    void setPrice(int p){
        price = p;
    }
    int getPrice(){
        return price;
    }
    void print(){
        cout << name << endl;
        cout << model_no << endl;
        cout << price << endl;
        cout << endl;
    }

    ~Car(){
        cout << "Destroying the Class" << endl;
        // Writing code to Dynamically delete it 
        if(name != NULL){
            delete[] name;
        }
    }
};
int main(){
    Car C;
    // Initialisation
    C.setPrice(1500);
    C.setName("HONDA");
    C.model_no = 43;
    C.print();

    Car D(100, 30, "NANO");
    Car E(234, 43, "AUDI"); //Default Copy Constructor

    D = E; // Copy Assignment operator -> Shallow operator
    
    D.name[0] = 'G';
    D.print();
    E.print();
    
    // Suppose we create a dynamic object
    Car *DC = new Car(2434, 3342, "Dynamically Tesla Car");
    delete DC;
    return 0;
}