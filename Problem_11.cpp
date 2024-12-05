#include <iostream>
#include <vector>
#include <string>
using namespace std;

// Item structure to store details of an item
struct Item {
    int code;
    double price;
};

class ShoppingList {
private:
    vector<Item> items; // Vector to store the list of items

public:
    // Add an item to the shopping list
    void addItem(int code, double price) {
        items.push_back({code, price});
        cout << "Item with code " << code << " and price " << price << " added." << endl;
    }

    // Delete an item from the shopping list by code
    void deleteItem(int code) {
        for (auto it = items.begin(); it != items.end(); ++it) {
            if (it->code == code) {
                items.erase(it);
                cout << "Item with code " << code << " deleted." << endl;
                return;
            }
        }
        cout << "Item with code " << code << " not found." << endl;
    }

    // Calculate and return the total price of the shopping list
    double calculateTotal() const {
        double total = 0;
        for (const auto& item : items) {
            total += item.price;
        }
        return total;
    }

    // Display all items in the shopping list
    void displayItems() const {
        if (items.empty()) {
            cout << "The shopping list is empty." << endl;
            return;
        }
        cout << "Shopping List:" << endl;
        for (const auto& item : items) {
            cout << "Code: " << item.code << ", Price: " << item.price << endl;
        }
    }
};

// Main function to demonstrate the functionality
int main() {
    ShoppingList shoppingList;

    // Add items
    shoppingList.addItem(101, 15.5);
    shoppingList.addItem(102, 25.0);
    shoppingList.addItem(103, 40.75);

    // Display items
    shoppingList.displayItems();

    // Delete an item
    shoppingList.deleteItem(102);

    // Display items after deletion
    shoppingList.displayItems();

    // Calculate total
    double total = shoppingList.calculateTotal();
    cout << "Total Order Value: " << total << endl;

    return 0;
}