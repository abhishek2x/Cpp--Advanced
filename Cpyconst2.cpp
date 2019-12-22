#include <iostream>

using namespace std; 
  
class Point 
{ 
private: 
    int x, y; 
public: 
    Point(int a)
    {
        x = a; 
    } 
  
    // Copy constructor 
    Point(const Point &p2) 
    {
        x = p2.x;                
    }                 
    
    int getX()                
    {                
        return x;                
    }                 
};                 
    
int main()                 
{                 
    int n;                
    cout << "ENTER THE LIMIT : ";                
    cin >> n;                 
    n++;                
    cout << endl;                
    int a, b, c;                
    a = 0;                
    b = 1;                 
    c = a + b;                                                               
    cout << "FIBONACCI SERIES IS :-" << endl;                                                               
    for (int i = 0; i < n; i++)                                                               
    {                                                               
        Point p1(a);                                                               
        Point p2 = p1;                                                                
        if(i != n)                                                               
        cout << p2.getX() << "\t";                                                               
        a = b;                                                               
        b = c;                                                               
        c = a+b;                                                               
                        
    }                                                               
    return 0;                                                                
}                                                               
