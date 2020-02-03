#include <iostream>
using namespace std;

class Person{
    public:
        string name ;
        int age ;
};

class Student : public Person{
    public:
        void show(){
            cout << "Name is = " << name << endl;
            cout << "Age is = " << age << endl;
        }
};

int main(){
    Student s;
    s.name = "Abhishek";
    s.age = 42;

    s.show();
}
