#include <iostream>
using namespace std;

class Staff{
    private:
        char name[50];
        int code;
    pubic:
        void getData();
        void display();
};

class typist{
    private:
        int speed;
    public:
        void getData();
        void display();
};

void Staff :: getData(){
    cout << "Name :";
    gets(name);
    cout << "Code :"
    cin >> code;
}

void Staff :: display(){
    cout << "Name" << name << endl;
    cout << "Code  << code << endl";
}

void typist :: getData(){
    cout << "Speed: ";
    cin >> speed;
}

void typist :: display(){
    cout << speed;
}

int main(){
    typist t;
    cout << "Enter data : \n";
    t.Staff :: getData();
    t.getData();
    cout << "\n" << "Display Data" << "\n";
    t.Staff :: display();
    t.display():
    return 0;
}