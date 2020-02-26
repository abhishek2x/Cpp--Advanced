// Friend function application
#include <iostream>

using namespace std;
class dimensions
{
private:
    int length, breadth, height;

public:
    int sum = 0;
    dimensions(int l, int b, int h)
    {
        length = l;
        breadth = b;
        height = h;
    }
    friend void setData(dimensions);
    friend void area(dimensions);
    friend void volume(dimensions);
    friend void total(dimensions);
};
void setData(dimensions d1)
{
    cout << "The length is : " << d1.length << endl;
    cout << "The breadth is : " << d1.breadth << endl;
    cout << "The height is : " << d1.height << endl;
}
void area(dimensions d1)
{
    cout << "The area is : " << d1.length * d1.breadth << endl;
}
void volume(dimensions d1)
{
    cout << "The volume is : " << d1.length * d1.breadth * d1.height << endl;
}
int main()
{
    int l, b, h;
    cout << "Enter the dimensions of the box: \n";
    cin >> l >> b >> h;
    dimensions d2(l, b, h);
    area(d2);
    volume(d2);

    return 0;
}