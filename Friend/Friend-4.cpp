// Implementation of a Calculator using a Friend Function
#include <iostream>
using namespace std;

class Calculator{
    private:
        int a;
        int b;
    
    public:
        Calculator(int x, int y){
            a = x;
            b = y;
        }
        friend class Add;
        friend class Subtract;
        friend class Multiply;
        friend class Devide;
        friend class Modulus;
};

class Add{
    public:
        void AddDisp(Calculator c){
            cout << "Addition = " << c.a+c.b << endl;
        }      
};

class Subtract{
    public:
        void SubstractDisp(Calculator c){
            cout << "Difference = " << c.a-c.b << endl;
        }
};

class Devide{
    public:
        void DevideDisp(Calculator c){
            cout << "Division = " << c.a/c.b << endl;
        }
};

class Multiply{
    public:
        void MultiplyDisp(Calculator c){
            cout << "Multiplication = " << c.a*c.b << endl;
        }
};

class Modulus{
    public:
        void ModulusDisp(Calculator c){
            cout << "Modulus = " << c.a%c.b << endl;
        }
};

int main(){

    // Taking input from user
    int n1, n2;
    cout << "Enter first number\n";
    cin >> n1;
    cout << "Enter second number\n";
    cin >> n2;


    Calculator c(n1, n2);

    // Creating objects of individual classes
    Add a;
    Subtract s;
    Multiply M;
    Devide d;
    Modulus m;

    // Calling function of various classes
    a.AddDisp(c);
    s.SubstractDisp(c);
    M.MultiplyDisp(c);
    d.DevideDisp(c);
    m.ModulusDisp(c);

    return 0;
}