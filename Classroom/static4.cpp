#include <iostream>
using namespace std;

class Marks{
    int oops, py, avg;
    string name;
    public:
        void getData(int m1, int m2, string n){
            name = n;
            oops = m1;
            py = m2;
        }
        
        // Marks check(Marks p){
        //     Marks temp;
        //     temp.oops = oops + p.oops;  
        //     temp.py = py + p.py;  
        //     return temp;
        // }

        void fndAvg(Marks obj){
            obj.avg = (obj.oops+obj.py)/2;
            cout << "The average of" << obj.name << " is = " << obj.avg << endl;
        }
};

int main(){
    Marks o1, o2, o3, o4, o5, o6;
    o1.getData(20, 30, "Abhishek chakka hijda randi");
    o2.getData(30, 40, "Jackson");
    o3.getData(40, 70, "Nickson");
    o4.getData(50, 10, "Nimesh");
    o5.getData(60, 20, "Pravir");
    o6.fndAvg(o1);
    o6.fndAvg(o2);
    o6.fndAvg(o3);
    o6.fndAvg(o4);
    o6.fndAvg(o5);
}
