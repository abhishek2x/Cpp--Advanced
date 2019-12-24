#include <iostream>
using namespace std;

class Jump{
    int x;
    public:
        void getData(int m){
            x = m;
        }
        Jump add(Jump s){
            Jump temp;
            temp.x = x + s.x;
            return temp;
        }
        void answer(){
            cout << "The answer is = " << x;
        }
};

int main(){
    Jump s1, s2, s3;
    s1.getData(4);
    s2.getData(10);
    s3 = s1.add(s2);
    s3.answer();
}