#include <iostream>
using namespace std;

namespace A{
    int value(){
        return 5;
    }
}
namespace B{
    const int n = 8;
    int value(){
        return 2*n;
    }
}
int main(){
    cout << A :: value() << "\n";
    cout << B :: value() << "\n";
    cout << B :: n ;
    return 0;
}