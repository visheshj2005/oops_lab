#include <iostream>
using namespace std;

class Number {
protected:
    int num;

public:
    void setNumber(int n) {
        num = n;
    }
};

class Square : public Number {
public:
    int getSquare() {
        return num * num;
    }
};

class Cube : public Number {
public:
    int getCube() {
        return num * num * num;
    }
};

int main() {
    Square sq;
    Cube cb;

    int number;
    cout << "Enter a number: ";
    cin >> number;

    sq.setNumber(number);
    cb.setNumber(number);

    cout << "Square of " << number << " is: " << sq.getSquare() << endl;
    cout << "Cube of " << number << " is: " << cb.getCube() << endl;

    return 0;
}
