#include <iostream>
using namespace std;

struct self
{
    int age;
    float height;
    double cash;
    char gender;
    string name;
};

void funcToStruct(self p);

int main(){
    self a;
    a.age = 35;
    a.height = 4.5;
    a.cash = 789.4;
    a.gender = 'M';
    a.name = "Jackson Jacob Sondi";
    funcToStruct(a);
    return 0;
}


void funcToStruct(self p){
    
    cout << "----------------------------------------------------------------------------------------------------" << endl;
    cout << "The details are listed below : " << endl;
    cout << "Name = " << p.name << endl;
    cout << "Height = " << p.height << endl;
    cout << "Cash = " << p.cash << endl;
    cout << "Gender = " << p.gender << endl;
    cout << "Age = " << p.age << endl;
    cout << "----------------------------------------------------------------------------------------------------" << endl;
}

