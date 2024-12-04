#include <iostream>
using namespace std;
struct book
{
    string name;
    int pages;
    int price;
};
int main()
{
    struct book Book[2];
    for (int i = 0; i < 2; i++)
    {
        cout << "Enter Book " << i + 1 << " name :-";
        cin >> Book[i].name;
        cout << "Enter number of pages :-";
        cin >> Book[i].pages;
        cout << "Enter price of the book:-";
        cin >> Book[i].price;
    }
    for (int i = 0; i < 2; i++)
    {
        cout << Book[i].name << endl;
        cout << Book[i].pages << endl;
        cout << Book[i].price << endl;
    }
    return 0;
}
