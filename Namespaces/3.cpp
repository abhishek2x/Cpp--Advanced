#include <iostream>
using namespace std;

namespace ns{
    // Class
    class LetsGo{
        public:
            void display(){
                cout << "In the function inside the class which is itself contained in a namespace";
            }
    };
}

int main(){
    // Creating an object of the class 
    ns :: LetsGo obj;
    
    obj.display();
}