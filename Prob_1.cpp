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
    void display_area()
    {
        cout << "Area is = " << length * width << endl;
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
    r.set_dim(5.5f, 5.0f);
    r.display_dim();
    r.display_area();
    return 0;
}
