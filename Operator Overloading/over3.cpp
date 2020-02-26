// Overloading increment and decrement operator
#include <iostream>
using namespace std;

class example{
    private:
        int t;
        int k;

    public:
        example(){
            t=0;
            k=0;
        }
        void operator--(){
            t--;
            k--;
        }
        void operator++(){
            t++;
            k++;
        }
        void display(){
            cout << "\n\nT = "  << t;
            cout << "\nK = "  << k;
        }
};

int main(){
    // Creating object of example class
    example e;

    // Playing with functionalities
    e.display();
    --e;
    e.display();
    ++e;
    e.display();

    return 0;
}
