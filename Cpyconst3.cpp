//Deep Copy Constructor

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
};
int main(){
    Car C;
    // Initialisation
    C.setPrice(1500);
    C.setName("Best Car");
    C.model_no = 43;
    C.print();

    Car D(100, 30, "Better Car");
    Car E(D); //Default Copy Constructor
    E.name[0] = 'G';

    D.print();
    E.print();
    return 0;
}