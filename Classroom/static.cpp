#include <iostream>
using namespace std;
class Ab{
    int x;
    public: 
        void getData(int n){
            x = n;
        }
        int answer(Ab s){
            x = s.x * s.x;
        }
        void show(){
            cout << "Answer is = " << x;
        }
};
int main(){
    Ab s1, s2;
    s1.getData(6);
    s2.answer(s1);
    s2.show();
}