#include <iostream>
using namespace std;

int arithmetic(int, int, int(*)(int, int));

int add(int, int);
int sub(int, int);

int add(int a, int b){
    return a+b;
}

int sub(int a, int b){
    return a-b;
}

int arithmetic(int a, int b, int(*operation)(int, int)){
    return (*operation)(a, b);
}

int main(){
    int n = 10;
    int m = 20;

    cout << arithmetic(n, m, add) << endl;
    cout << arithmetic(n, m, sub);
    return 0;
}