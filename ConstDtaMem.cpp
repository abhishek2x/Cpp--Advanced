#include <iostream>
#include <cstring>
using namespace std;

class Car{
    private:
        int price;
    public:
        int model_no;
        char *name;
        const int tyres;

        // Constructor
        Car():name(NULL), tyres(4){
        }
        // Constructor with parameters
        Car(int p, int mn, char *n, int t=4):price(p), model_no(mn), tyres(t){
            name = new char[strlen(n) + 1];
            strcpy(name, n);
        }
        // Deep copy constructor
        Car(Car &X):tyres(X.tyres){
            // Making a copy car
            price = X.price;
            model_no = X.model_no;

            name = new char(strlen(X.name)+1);
            strcpy(name, X.name);
        }

        void operator = (const Car &X){
            cout << "In the Copy constructor" << endl;
            price = X.price;
            model_no = X.model_no;

            name = new char[strlen(name)+1];
            strcpy(name, X.name);
        }
        void setName(const char *n){
            if(name == NULL){
                name = new char[strlen(name)+1];
                strcpy(name, n);
            }
            else{
                //Later delete
            }
        }
        void start()const{
            cout << "Starting" << name <<  endl; 
        }
        void setPrice(const int p){
            price = p;
        }
        int getPrice()const{ 
            return price;
        }
        void print()const{
            cout << name << endl;
            cout << model_no << endl;
            cout << price << endl;
            cout << endl;
        }
        ~Car(){
            cout << "Destroying the car" << name << endl;
            
            // Write code to delete the dynamic data member
            if(name == NULL){
                delete [] name;
            }
        }
};  

int main(){

    Car C;

    C.setPrice(4325);
    C.setName("AUDI");
    C.model_no = 252;
    
    C.print();

    Car D(100, 4832, "BMW");
    Car E(43, 32, "NANO");

    D = E; // Shallow copy constructor

    D.name[0] = 'P';

    D.print();
    E.print();

    cout << E.tyres << endl;

    Car *DC = new Car(199, 43, "Dynamic Car Tesla");
    
    delete DC;

    return 0;
}