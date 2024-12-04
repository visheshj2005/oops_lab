#include <iostream>
using namespace std;
class demo
{
    static int num;

public:
    demo()
    {
        num++;
    }
    static void show_count()
    {
        cout << num << endl;
    }
};
int demo::num = 0;
int main()
{
    demo d;
    demo d1, d2;
    demo da[5];
    demo::show_count();
    return 0;
}