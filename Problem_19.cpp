#include <iostream>
#include <stdexcept>
using namespace std;

void divide(int a, int b) {
    if (b == 0) {
        throw invalid_argument("Division by zero is not allowed.");
    }
    cout << "Result: " << a / b << endl;
}

int main() {
    int num1, num2;

    cout << "Enter two numbers (numerator and denominator): ";
    cin >> num1 >> num2;

    try {
        divide(num1, num2);
    } catch (const invalid_argument &e) {
        cout << "Exception: " << e.what() << endl;
    } catch (...) {
        cout << "An unexpected exception occurred." << endl;
    }

    return 0;
}
