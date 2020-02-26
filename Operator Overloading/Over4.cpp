// Overloading  ==  operator
#include <iostream>
using namespace std;

class Aequels{
    private:
        int a;

    public:
        void get(int k){
            a = k;
        }
        void operator==(Aequels obj){
            if(obj.a == a) cout << "Equal";
            else cout << "Not Equal";
        }
};

int main(){
    // Creating objects
    Aequels object1;
    Aequels object2;
    
    object1.get(5);
    object2.get(5);

    // LHS is implicit and RHS is explicit
    object1 == object2;
    
    return 0;
}