#include <iostream>
using namespace std;
class rectangle
{
    float length;
    float width;

public:
    rectangle(float length, float width)
    {
        this->length = length;
        this->width = width;
        cout << "Parameterized Constructor Called..";
    }
};
int main()
{
    rectangle r(5.0f, 2.0f);
    return 0;
}