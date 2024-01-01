#include <iostream>
//#include <vector>
#include <iomanip>

using namespace std;

// Struct to represent menu items
struct MenuItem {
    string name;
    double price;
};

// Function to display the menu
void showmanu(const vector<MenuItem>& menu) {
    cout << "Menu:\n";
    cout << "Sr. No.\tItem\tPrice\n";
    for (size_t i = 0; i < menu.size(); i++) {
        cout << i + 1 << "\t" << menu[i].name << "\t" << menu[i].price << endl;
    }
}

int main() {
    // Shop name and menu
    string shopName = "little seoul";
    vector<MenuItem> menu = {
        {"coco", 100.0},
        {"shak", 150.0},
        {"chocolate", 200.0}
    };

    // Prompt the user to enter their name
    string userName;
    cout << "Welcome to  " << shopName << "!\n";
    cout<< "------------------------"<< endl;
    cout << "Please enter your name: ";
    getline(cin, userName);

    // Prompt the user to enter their phone number
    string phoneNumber;
    while (true) {
        cout << "Please enter your 10-digit phone number: ";
        getline(cin, phoneNumber);
        if (phoneNumber.length() == 10) {
            break;
        } else {
            cout << "Invalid phone number. Please enter a 10-digit number.\n";
        }
    }

    // Display the menu
   showmenu(menu);

    // Allow the customer to select items
    //vector<MenuItem> selectedItems;
    char choice;
    do {
        size_t itemIndex;
        cout << "Enter the Sr. No. of the item you want to order: ";
        cin >> itemIndex;
        if (itemIndex >= 1 && itemIndex <= menu.size()) {
            selectedItems.push_back(menu[itemIndex - 1]);
            cout << "Item added to your order.\n";
        } else {
            cout << "Invalid item selection.\n";
        }

        cout << "Do you want to order another item? (y/n): ";
        cin >> choice;
    } while (choice == 'y' || choice == 'Y');

    // Generate the bill
    double total = 0.0;
    cout << "\nYour Bill:\n";
    cout << "Sr. No.\tItem\tPrice\tQuantity\tTotal\n";
    for (size_t i = 0; i < selectedItems.size(); i++) {
        double itemPrice = selectedItems[i].price;
        total += itemPrice;
        cout << i + 1 << "\t" << selectedItems[i].name << "\t" << itemPrice << "\t1\t" << itemPrice << endl;
    }

    // Calculate GST and CGST
    double gst = 0.18 * total;
    double cgst = gst / 2;
    total += gst;
    cout << "            "<< endl;
    cout << "GST (18%): " << gst << endl;
    cout << "             "<< endl;
    cout << "CGST (9%): " << cgst << endl;
    cout << "            " << endl;
    cout << "Total Amount (including tax): " << total << endl;
    cout << "-----------------------------------" << endl;
    
    cout << "THANK FOR YOUR VISIT. " << userName << "  HAVE A NICE DAY\n";

    return 0;
}
