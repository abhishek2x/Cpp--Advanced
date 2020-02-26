//Friend Function
#include <iostream>
using namespace std;

class Demo{
    private:
        int x;

    public:
        Demo(int a){
            x = a;
        }
        friend void display(Demo);
};
void display(Demo d1){
    cout << d1.x;
}
int main(){
    Demo d2(50);
    display(d2);
    return 0;
}