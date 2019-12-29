#include <iostream>
using namespace std;

namespace play{
    class go;
}

// defining the namespace class

class play :: go{
    public:
        void display(){
        cout << "just keeping it on";
        }
};

int main(){
    play :: go obj;
    obj.display();
    return 0;
}