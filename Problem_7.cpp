#include <iostream>
using namespace std;
float volume(float length, float breadth, float height)
{
    return length * breadth * height;
}
float volume(float radius, float height)
{
    return 3.14 * radius * radius * height;
}
float volume(float side)
{
    return side * side * side;
}
int main()
{
    cout << "Volume of Rectangular Box :- " << volume(2.0f, 3.0f, 4.0f) << endl;
    cout << "Volume of Cube :- " << volume(2.0f) << endl;
    cout << "Volume of Cylinder :- " << volume(2.0f, 3.0f) << endl;
    return 0;
}