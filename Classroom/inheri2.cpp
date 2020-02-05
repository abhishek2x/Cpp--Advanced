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

class Student1 : public Student{
    public:
        void change(){
            name = "Jackson";
            age = 54;
        }
        void show1(){
            cout << "Name is = " << name << endl;
            cout << "Age is = " << age << endl;
        }
};

int main(){
    Student1 s1;
    s1.name = "Abhishek";
    s1.age = 42;
    s1.show();
    s1.change();
    s1.show1();

    return 0;
}
