#include <iostream>
using namespace std;
class rectangle
{
    float length;
    float width;

public:
    rectangle()
    {
        length = width = 10;
    }
    rectangle(float length, float width)
    {
        this->length = length;
        this->width = width;
    }
    rectangle(int side)
    {
        length = width = side;
    }
    float area()
    {
        return length * width;
    }
};
int main()
{
    rectangle r1;
    rectangle r2(5, 5);
    rectangle r3(6);
    cout << "Area of r1: " << r1.area() << endl;
    cout << "Area of r2: " << r2.area() << endl;
    cout << "Area of r3: " << r3.area() << endl;
    return 0;
}