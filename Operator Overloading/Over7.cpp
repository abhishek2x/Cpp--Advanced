// Playing with Complex Numbers
#include <iostream>
using namespace std;

class Complex{
    private:
        int real;
        int imag;

    public:
        Complex(){
            real = 0;
            imag = 0;
        }
        Complex(int r, int i){
            real = r;
            imag = i;
        }
        void setReal(int r1){
            real = r1;
        }
        void setImag(int i1){
            imag = i1;
        }
        void print(){
            cout << "\n " << real << " + " << imag << "i\n";
        }
        Complex operator+(Complex c){
            Complex F;
            F.real = c.real + real;
            F.imag = c.imag + imag;
            return F;
        }
};

int main(){
    // Declaring objects
    Complex x(5, 3);
    Complex y;
    Complex z;

    y.setReal(5);
    y.setImag(3);

    x.print();
    y.print();

    z = x + y;
    z.print();

    return 0;
}
