#include <iostream>
using namespace std;

// Base Class
class Animal {
public:
    void displayAnimal() {
        cout << "I am an Animal." << endl;
    }
};

// Derived Class 1 (Single Inheritance from Animal)
class Mammals : public Animal {
public:
    void displayMammals() {
        cout << "I am a Mammal." << endl;
    }
};

// Derived Class 2 (Independent Class)
class Herbivores {
public:
    void displayHerbivores() {
        cout << "I am a Herbivore." << endl;
    }
};

// Derived Class 3 (Multiple Inheritance from Mammals and Herbivores)
class Cow : public Mammals, public Herbivores {
public:
    void displayCow() {
        cout << "I am a Cow, a Mammal and a Herbivore." << endl;
    }
};

int main() {
    Cow cow;
    
    // Calling methods from different classes
    cow.displayAnimal();       // From Animal
    cow.displayMammals();      // From Mammals
    cow.displayHerbivores();   // From Herbivores
    cow.displayCow();          // From Cow
    
    return 0;
}
