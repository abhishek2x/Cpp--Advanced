//Friend Function
// In this we differentiate between a normal :: and friend function
#include <iostream>
using namespace std;

class Demo{
    private:
        int a, b;

    public:
        void setValue();
        friend float mean(Demo);
};
void Demo :: setValue(){
    a = 34;
    b = 43;
}
float mean(Demo d1){
    return ((d1.a+d1.b)/2);
}
int main(){
    Demo d1;
    d1.setValue();
    cout << mean(d1);
    return 0;
}
