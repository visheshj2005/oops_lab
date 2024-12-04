#include <iostream>
using namespace std;
class class_2;
class class_1
{
    int num;

public:
    class_1(int num)
    {
        this->num = num;
    }
    friend void maximum(class_1 &, class_2 &);
};
class class_2
{
    int num;

public:
    class_2(int num)
    {
        this->num = num;
    }
    friend void maximum(class_1 &, class_2 &);
};
void maximum(class_1 &num1, class_2 &num2)
{
    if (num1.num > num2.num)
    {
        cout << "Number 1 is maximum" << endl;
    }
    else if (num1.num < num2.num)
    {
        cout << "Number 2 is maximum" << endl;
    }
    else
    {
        cout << "Both are equal" << endl;
    }
}
int main()
{
    class_1 num1(6);
    class_2 num2(6);
    maximum(num1, num2);
    return 0;
}