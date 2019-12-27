#include <iostream>
using namespace std;

int *p1, *p2;

void allocate(){
    p1 = new int;
    *p1 = 3;
    p2 = new int(6);
}

int main(){
    allocate();
    cout << *p1 << endl;
    cout << *p2 << endl;
    delete p1;
    delete p2;
    return 0;
}