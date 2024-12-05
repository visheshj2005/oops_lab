#include <iostream>
#include <cmath>
using namespace std;

class Shape {
public:
    virtual void calculateArea() = 0;  // Pure virtual function
};

class Rectangle : public Shape {
private:
    double width, height;
public:
    Rectangle(double w, double h) : width(w), height(h) {}
    
    void calculateArea() override {
        double area = width * height;
        cout << "Rectangle area: " << area << endl;
    }
};

class Circle : public Shape {
private:
    double radius;
public:
    Circle(double r) : radius(r) {}
    
    void calculateArea() override {
        double area = M_PI * radius * radius;
        cout << "Circle area: " << area << endl;
    }
};

int main() {
    Shape* shape;
    Rectangle rect(5, 7);
    Circle circ(3);

    shape = &rect;
    shape->calculateArea();  // Calls Rectangle's calculateArea

    shape = &circ;
    shape->calculateArea();  // Calls Circle's calculateArea

    return 0;
}
