#include <iostream>
using namespace std;

int main(){

    // Static allocation
    int number = 10;
    int *p = &number;

    // Dynamic allocation
    int *p2;
    cout << p2 << endl;
    p2 = new int;

    cout << p2 << endl;
    *p2 = 12;
    cout << p2 << endl;
    cout << *p2 << endl;

    delete(p2);
    return 0;
}