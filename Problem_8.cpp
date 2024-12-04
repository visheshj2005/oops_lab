#include <iostream>
using namespace std;
class rectangle
{
    float length;
    float width;

public:
    void get_data()
    {
        cout << "Length = " << length << endl;
        cout << "Width = " << width << endl;
    }
    void put_data(float length, float width)
    {
        this->length = length;
        this->width = width;
    }
};
int main()
{
    rectangle r;
    r.put_data(2.0f, 3.0f);
    r.get_data();
    return 0;
}