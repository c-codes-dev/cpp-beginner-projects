#include <iostream>
using namespace std;

int main()
{
    int choice, quantity;
    double itemPrice;
    double totalBill;
    double discount;
    double finalBill;

    int totalCustomers = 0;
    double totalSales = 0;

    char anotherCustomer;

    // Outer loop: keeps taking orders from different customers
    do
    {
        totalBill = 0;

        cout << "\n=============================\n";
        cout << "   RESTAURANT ORDERING SYSTEM\n";
        cout << "=============================\n";

        // Inner loop: keeps showing menu until customer chooses 5
        do
        {
            cout << "\n--------- MENU ---------\n";
            cout << "1. Burger - $5\n";
            cout << "2. Pizza  - $8\n";
            cout << "3. Pasta  - $6\n";
            cout << "4. Drink  - $2\n";
            cout << "5. Finish Order\n";

            cout << "Enter your choice: ";
            cin >> choice;

            switch (choice)
            {
                case 1:
                    itemPrice = 5;

                    cout << "Enter quantity: ";
                    cin >> quantity;

                    totalBill = totalBill + (itemPrice * quantity);

                    cout << "Burger added to order.\n";
                    break;

                case 2:
                    itemPrice = 8;

                    cout << "Enter quantity: ";
                    cin >> quantity;

                    totalBill = totalBill + (itemPrice * quantity);

                    cout << "Pizza added to order.\n";
                    break;

                case 3:
                    itemPrice = 6;

                    cout << "Enter quantity: ";
                    cin >> quantity;

                    totalBill = totalBill + (itemPrice * quantity);

                    cout << "Pasta added to order.\n";
                    break;

                case 4:
                    itemPrice = 2;

                    cout << "Enter quantity: ";
                    cin >> quantity;

                    totalBill = totalBill + (itemPrice * quantity);

                    cout << "Drink added to order.\n";
                    break;

                case 5:
                    cout << "\nOrder completed.\n";
                    break;

                default:
                    cout << "Invalid choice! Please try again.\n";
            }

        } while (choice != 5);

        // Discount calculation
        if (totalBill >= 50)
        {
            discount = totalBill * 0.10;
        }
        else
        {
            discount = 0;
        }

        // Final bill
        finalBill = totalBill - discount;

        // Customer count and restaurant sales
        totalCustomers++;
        totalSales = totalSales + finalBill;

        cout << "\n=============================\n";
        cout << "       FINAL BILL\n";
        cout << "=============================\n";

        cout << "Total Bill: $" << totalBill << endl;
        cout << "Discount: $" << discount << endl;
        cout << "Final Bill: $" << finalBill << endl;

        cout << "\nDoes another customer want to order? (Y/N): ";
        cin >> anotherCustomer;

    } while (anotherCustomer == 'Y' || anotherCustomer == 'y');

    // Final restaurant information
    cout << "\n=============================\n";
    cout << "      RESTAURANT SUMMARY\n";
    cout << "=============================\n";

    cout << "Total Customers Served: "
         << totalCustomers << endl;

    cout << "Total Restaurant Sales: $"
         << totalSales << endl;

    cout << "\nThank you for visiting!\n";

    return 0;
}
