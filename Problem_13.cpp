#include <iostream>
using namespace std;

class class_2; // Forward declaration

class class_1 {
    int num1;
    int num2;
public:
    class_1(int num1, int num2) {
        this->num1 = num1;
        this->num2 = num2;
    }
    void display() {
        cout << "Display Class_1" << endl;
        cout << num1 << endl;
        cout << num2 << endl;
    }
    friend void swap(class_1 &, class_2 &);
};

class class_2 {
    int num1;
    int num2;
public:
    class_2(int num1, int num2) {
        this->num1 = num1;
        this->num2 = num2;
    }
    void display() {
        cout << "Display Class_2" << endl;
        cout << num1 << endl;
        cout << num2 << endl;
    }
    friend void swap(class_1 &, class_2 &);
};

void swap(class_1 &c1, class_2 &c2) {
    int temp1 = c1.num1;
    int temp2 = c1.num2;
    c1.num1 = c2.num1;
    c1.num2 = c2.num2;
    c2.num1 = temp1;
    c2.num2 = temp2;
}

int main() {
    class_1 c1(10, 20);
    class_2 c2(30, 40);
    cout << "Display Before Swap..." << endl;
    c1.display();
    c2.display();
    swap(c1, c2);
    cout << "Display After Swap..." << endl;
    c1.display();
    c2.display();
    return 0;
}
