#include <iostream>
#include <limits> // For numeric_limits
using namespace std;

class managers
{
    string name;
    int age;

public:
    void get_data()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
    void set_data(string name, int age)
    {
        this->name = name;
        this->age = age;
    }
};

int main()
{
    managers m[3];
    string name;
    int age;
    for (int i = 0; i < 3; i++)
    {
        cout << "Enter name of Employee: ";
        cin >> ws; // To ignore leading whitespaces
        getline(cin, name);
        cout << "Enter age of the Employee: ";
        cin >> age;
        m[i].set_data(name, age);
        // Clear the input buffer to handle the newline character
        // cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    for (int i = 0; i < 3; i++)
    {
        m[i].get_data();
    }
    return 0;
}
