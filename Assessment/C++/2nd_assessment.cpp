#include <iostream>
#include <string>
#include <vector>
using namespace std;

// Class to represent a food item
class FoodItem {
public:
    string name;
    float price;

    FoodItem(string n, float p) : name(n), price(p) {}
};

// Class to represent the food ordering system
class FoodOrderingSystem {
    vector<FoodItem> menu;
    float totalBill;

public:
    FoodOrderingSystem() : totalBill(0) {
        // Initialize the menu with some food items
        menu.push_back(FoodItem("Pizza", 250.0));
        menu.push_back(FoodItem("Burger", 150.0));
        menu.push_back(FoodItem("Pasta", 200.0));
        menu.push_back(FoodItem("Sandwich", 100.0));
    }

    void displayMenu() {
        cout << "Menu:\n";
        for (int i = 0; i < menu.size(); i++) {
            cout << i + 1 << ". " << menu[i].name << " - Rs. " << menu[i].price << endl;
        }
    }

    void orderFood() {
        int choice, quantity;
        char continueOrder;

        do {
            displayMenu();
            cout << "Enter your choice: ";
            cin >> choice;

            if (choice < 1 || choice > menu.size()) {
                cout << "Invalid choice. Please try again.\n";
                continue;
            }

            cout << "Enter quantity: ";
            cin >> quantity;

            totalBill += menu[choice - 1].price * quantity;

            cout << "Do you want to order more? (y/n): ";
            cin >> continueOrder;
        } while (continueOrder == 'y' || continueOrder == 'Y');

        generateBill();
    }

    void generateBill() {
        cout << "Total Bill: Rs. " << totalBill << endl;
    }
};

int main() {
    string customerName;

    // Ask for the customer's name
    cout << "Enter your name: ";
    getline(cin, customerName);

    // Create an instance of the food ordering system
    FoodOrderingSystem system;

    // Start the food ordering process
    system.orderFood();

    return 0;
}

