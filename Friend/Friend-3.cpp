// Friend Classes
#include <iostream>
using namespace std;

class demo{
    private:
        int x, y;

    public:
        demo(int a ,int b){
            x = a;
            y = b;
        }
        friend class frnd;
        friend class add;
        friend class subs;
        friend class multi;
};

class frnd{
    public:
        void display(demo d1){
            cout << "In the Frnd Function\n";
            cout << d1.x << " , " << d1.y << endl;
        }
};
class add{
    public:
        void displaySum(demo d1){
            cout << "In the Sum Function" << endl;
            cout << d1.x+d1.y << endl;
        }
};
class subs{
    public:
        void displayDiff(demo d1){
            cout << "In the Diff Function" << endl;
            cout << d1.y-d1.x << endl;
        }
};
class multi{
    public:
        void displayMulti(demo d1){
            cout << "In the Multi Function" << endl;
            cout << d1.x*d1.y << endl;
        }
};
int main(){
    demo d1(10, 20);

    frnd f;
    add a;
    subs s;
    multi m;

    f.display(d1);
    a.displaySum(d1);
    s.displayDiff(d1);
    m.displayMulti(d1);

    return 0;
}