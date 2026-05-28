#include <iostream>
using namespace std;

int main() {

   // Declaring variables
    string customerName;
    string phoneModel;
    int quantity;
    double pricePerPhone, totalSalesAmount;

// Prompting user for input
cout << "Enter customer name: ";
cin >> customerName;

cout << "Enter phone model purchased: ";
cin >> phoneModel;

cout << "Enter quantity bought: ";
cin >> quantity;

cout << "Enter price per phone: ";
cin >> pricePerPhone;
// Calculating total sales amount
totalSalesAmount = quantity * pricePerPhone;

  // Displaying receipt
cout << "\n========== SALES RECEIPT ==========" << endl;
cout << "Customer Name      : " << customerName << endl;
cout << "Phone Model        : " << phoneModel << endl;
cout << "Quantity Bought    : " << quantity << endl;
cout << "Price Per Phone    : " << pricePerPhone << endl;
cout << "Total Sales Amount : " << totalSalesAmount << endl;
cout << "===================================" << endl;

    return 0;
}
