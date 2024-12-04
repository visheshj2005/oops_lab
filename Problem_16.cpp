#include <iostream>
using namespace std;
class rectangle
{
    float length;
    float width;

public:
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
    rectangle *r = new rectangle(5);
    cout << "Area of rectangle: " << r->area() << endl;
    return 0;
}