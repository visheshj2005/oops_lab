#include <iostream>
using namespace std;
class complex
{
    int real;
    int ima;

public:
    complex(int real, int ima)
    {
        this->real = real;
        this->ima = ima;
    }
    complex() {}
    void display()
    {
        cout << "Real part is :- " << real << endl;
        cout << "Imaginary part is :- " << ima << endl;
    }
    friend complex add(complex &, complex &);
};
complex add(complex &c1, complex &c2)
{
    complex ans;
    ans.real = c1.real + c2.real;
    ans.ima = c1.ima + c2.ima;
    return ans;
}
int main()
{
    complex c1(2, 3);
    complex c2(3, 2);
    complex ans = add(c1, c2);
    cout << "After adding C1 and C2" << endl;
    ans.display();
    return 0;
}