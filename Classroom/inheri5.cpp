// Deals with basic functionality of Base and Derived class
#include <iostream>
using namespace std;

class Base{
    public:
        void show(){
            cout << "In the Base Class\n";
        }
};

class Derived : public Base{
    public:
    void show(){
        cout << "In the derived class\n";
    }
};

int main(){
    Base b;
    Derived d;
    b.show();
    d.show();

    return 0;
}