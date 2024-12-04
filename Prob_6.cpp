#include <iostream>
using namespace std;
inline float multiplication(float num1, float num2)
{
    return num1 * num2;
}
inline float division(float num1, float num2)
{
    return num1 / num2;
}
int main()
{
    cout << "Multiplication = " << multiplication(1.2, 0.2) << endl;
    cout << "Division = " << division(1.2, 0.2) << endl;
    return 0;
}
