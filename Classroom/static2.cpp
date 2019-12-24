#include <iostream>
using namespace std;
class Sumplay{
    int x, y, sum;
    public: 
        void getData(int n, int m){
            x = n;
            y = m;
        }
        int answer(Sumplay s){
            sum = s.x + s.y;
        }
        void show(){
            cout << "Answer is = " << sum;
        }
};

int main(){
    Sumplay s1, s2;
    s1.getData(6, 6);
    s2.answer(s1);
    s2.show();
}