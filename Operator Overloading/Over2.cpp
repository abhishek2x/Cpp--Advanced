// Operator Overloading at a Glance
#include <iostream>
using namespace std;

class OperOver{
    private:
        int data[5];

    public:
        void input(){
            cout << "Enter five numbers : \n";
            for (int i = 0; i < 5; i++){
                cin >> data[i];
            }
        }

        int operator[](int num){
            return data[num];
        }
};

int main(){
    OperOver ob;

    ob.input();
    int sum = 0;
    cout << "Calculating sum by overloading [] Operator\n";
    for (int j = 0; j < 5; j++){
        sum += ob[j];
    }
    cout << sum;
    return 0;
}
