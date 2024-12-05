#include <iostream>
using namespace std;

class Box {
private:
    double length, width, height; // Private data members

public:
    // Constructor to initialize dimensions
    Box(double l, double w, double h) : length(l), width(w), height(h) {}

    // Friend function declaration
    friend double calculateVolume(const Box& box);

    // Member function demonstrating the use of this pointer
    void compare(Box& otherBox) {
        if (this->getVolume() > otherBox.getVolume()) {
            cout << "Current box is larger than the other box." << endl;
        } else if (this->getVolume() < otherBox.getVolume()) {
            cout << "Current box is smaller than the other box." << endl;
        } else {
            cout << "Both boxes are of the same size." << endl;
        }
    }

    // Helper function to get volume
    double getVolume() const {
        return length * width * height;
    }
};

// Friend function definition
double calculateVolume(const Box& box) {
    return box.length * box.width * box.height; // Accessing private members
}

int main() {
    // Create two Box objects
    Box box1(3.5, 2.5, 1.5);
    Box box2(4.0, 3.0, 2.0);

    // Using friend function to calculate volume
    cout << "Volume of box1: " << calculateVolume(box1) << endl;
    cout << "Volume of box2: " << calculateVolume(box2) << endl;

    // Comparing boxes using the this pointer
    box1.compare(box2);

    return 0;
}
