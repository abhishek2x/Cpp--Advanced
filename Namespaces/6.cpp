#include <iostream>
using namespace std;


int m = 19;

namespace outer{
    int c = 29;
    namespace inner{
        int k = m;
    }
}

int main(){
    cout << outer::c << "\n" << outer::inner::k << endl; 
}