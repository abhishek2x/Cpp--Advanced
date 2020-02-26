// Basic outlook of an Operator Overloading Code
#include <iostream>
using namespace std;

class OperatorOver{
    private:
        int a, b;
    
    public:

        void input(){
            cout << "Enter two numbers : \n";
            cin >> a >> b;
        }
        
        void operator -(){
            a -= a;
            b -= b;
        }

        void display(){
            cout << "a = " << a << "\nb = " << b << endl; 
        }

};

int main(){
    OperatorOver ob;

    ob.input();
    cout << "\n\nResult before Operator Overloading\n\n";
    ob.display();
    -ob;
    cout << "\n\nResult before Operator Overloading\n\n";
    ob.display();

    return 0;
}