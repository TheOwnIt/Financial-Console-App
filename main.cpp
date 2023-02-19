#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct Transaction {
    string name;
    float amount;
};

vector<Transaction> transactions;

void display_transactions() {
    cout << "All Transactions:\n";
    for (const auto& t : transactions) {
        cout << t.name << " - " << t.amount << endl;
    }
}

void add_transaction() {
    Transaction t;
    cout << "Enter transaction name: ";
    cin >> t.name;
    cout << "Enter transaction amount: ";
    cin >> t.amount;
    transactions.push_back(t);
}

void display_menu() {
    cout << "Welcome to the Financial App!\n";
    cout << "1. View all transactions\n";
    cout << "2. Add a transaction\n";
    cout << "3. Exit\n";
    cout << "Enter your choice: ";
}

int main() {
    int choice = 0;
    while (choice != 3) {
        display_menu();
        cin >> choice;
        switch (choice) {
            case 1:
                display_transactions();
                break;
            case 2:
                add_transaction();
                break;
            case 3:
                cout << "Exiting the program.\n";
                break;
            default:
                cout << "Invalid choice. Try again.\n";
        }
    }
    return 0;
}

