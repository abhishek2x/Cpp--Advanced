#include <iostream>
using namespace std;

int squareConstnumber(const int);
int squareNonConst(int);
int squareConstRef(const int &);
int squareNonRef(int &);


int main(){
    int n = 5;
    const int num = 15;
    cout << squareConstnumber(n) << endl;
    cout << squareConstnumber(num) << endl;
    cout << squareNonConst(n) << endl;
    cout << squareNonConst(num) << endl;
    cout << squareConstRef(n) << endl;
    cout << squareConstRef(num) << endl;
    cout << squareNonRef(n) << endl;
    // cout << squareNonRef(num) << endl;
    return 0; 
}

int squareConstnumber(const int number){
    return number * number;
}

int squareNonConst(int number){
    return number * number;
}

int squareConstRef(const int &number){
    return number * number;
}

int squareNonRef(int &number){
    return number * number;
}