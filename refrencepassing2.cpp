// Concept of passing by refrence

#include <iostream>
using namespace std;
void square(int &);

int main(){
    int number = 10;
    cout << "In main : " << &number << endl; 
    cout << number << endl;
    square(number);
    cout << number << endl;
    return 0;
}

void square(int &pNumber){
    cout << "In square() : " << &pNumber << endl;
    pNumber *= pNumber;
}

