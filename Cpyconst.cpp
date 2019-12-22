#include <iostream>
// using namespace std;

// class Cpycons{
//     private:
//         int x;
//     public:
//         Cpycons(int x1){
//             x = x1;
//         }
//         Cpycons(const Cpycons &s){
//             x = s.x;
//         }
//         void getX(){
//             return x;
//         }
// };

// int main(){
//     Cpycons ob = new Cpycons(5);
//     cout << ob.getX() << endl;
// }

using namespace std; 

class Point 
{ 
private: 
    int x, y; 
public: 
    Point(int x1, int y1)
     { x = x1; y = y1; } 
  
    // Copy constructor 
    Point(const Point &p2) 
    {x = p2.x; y = p2.y; } 
  
    int getX()            {  return x; } 
    int getY()            {  return y; } 
}; 
  
int main() 
{ 
    Point p1(10, 15); // Normal constructor is called here 
    Point p2 = p1; // Copy constructor is called here 
  
    // Let us access values assigned by constructors 
    cout << "p1.x = " << p1.getX() << ", p1.y = " << p1.getY(); 
    cout << "\np2.x = " << p2.getX() << ", p2.y = " << p2.getY(); 
  
    return 0; 
}