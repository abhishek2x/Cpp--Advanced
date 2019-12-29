#include <iostream>
using namespace std;

namespace s{
    void display();
    class dance{
        public:
            void display();
    };
}

//defining method of namespace
void s :: dance :: display(){
    cout << "tring to keeping up with it\n";
}

void s :: display(){
    cout << "Something is happening\n";
}

//Driver code

int main(){
    s :: dance obj;
    s :: display();
    obj.display();
    return 0;
}