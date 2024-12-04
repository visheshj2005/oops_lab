#include <iostream>
using namespace std;
class rectangle
{
    float length;
    float width;

public:
    void set_dim(float length, float width)
    {
        this->length = length;
        this->width = width;
    }
    rectangle(const rectangle &r)
    {
        this->length = r.length;
        this->width = r.width;
    }
    rectangle()
    {
    }
    void display_dim()
    {
        cout << "Length = " << length << endl;
        cout << "Width = " << width << endl;
    }
};
int main()
{
    rectangle r;
    r.set_dim(5.0f, 5.0f);
    rectangle r1(r);
    cout << "Display dimensions of r1" << endl;
    r1.display_dim();
    return 0;
}