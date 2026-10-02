#include <iostream>
using namespace std;

int main()
{
    // Customer information
    string name;
    int age, nights;
    char student;
    int roomType;

    cout << "Enter customer name: ";
    cin >> name;

    cout << "Enter age: ";
    cin >> age;

    cout << "Are you a student? (Y/N): ";
    cin >> student;

    cout << "Enter number of nights: ";
    cin >> nights;

    cout << "\nRoom Types:\n";
    cout << "1. Standard - $50 per night\n";
    cout << "2. Deluxe   - $80 per night\n";
    cout << "3. Suite    - $120 per night\n";

    cout << "Enter room type: ";
    cin >> roomType;

    // Determine room price using if-else ladder
    double roomPrice;

    if (roomType == 1)
    {
        roomPrice = 50;
    }
    else if (roomType == 2)
    {
        roomPrice = 80;
    }
    else if (roomType == 3)
    {
        roomPrice = 120;
    }
    else
    {
        cout << "Invalid room type!";
        return 0;
    }

    // Calculate base bill
    double baseBill = roomPrice * nights;

    // Age-based discount
    double ageDiscount = 0;

    if (age <= 12)
    {
        ageDiscount = baseBill * 0.10;
    }
    else if (age >= 13 && age <= 59)
    {
        ageDiscount = 0;
    }
    else if (age >= 60)
    {
        ageDiscount = baseBill * 0.15;
    }

    // Apply age discount
    double billAfterAgeDiscount = baseBill - ageDiscount;

    // Student discount
    double studentDiscount = 0;

    if (student == 'Y' || student == 'y')
    {
        studentDiscount = billAfterAgeDiscount * 0.05;
    }

    // Final bill
    double finalBill = billAfterAgeDiscount - studentDiscount;

    // Category
    int category;

    if (finalBill <= 100)
    {
        category = 1;
    }
    else if (finalBill <= 300)
    {
        category = 2;
    }
    else
    {
        category = 3;
    }

    // Display room type using switch
    cout << "\n----- HOTEL BILL -----\n";
    cout << "Customer Name: " << name << endl;

    cout << "Room Type: ";

    switch (roomType)
    {
        case 1:
            cout << "Standard";
            break;

        case 2:
            cout << "Deluxe";
            break;

        case 3:
            cout << "Suite";
            break;
    }

    cout << endl;

    // Display stay category using switch
    cout << "Stay Category: ";

    switch (category)
    {
        case 1:
            cout << "Budget Stay";
            break;

        case 2:
            cout << "Comfortable Stay";
            break;

        case 3:
            cout << "Premium Stay";
            break;
    }

    cout << endl;

    cout << "Number of Nights: " << nights << endl;
    cout << "Room Price per Night: $" << roomPrice << endl;
    cout << "Base Bill: $" << baseBill << endl;
    cout << "Age Discount: $" << ageDiscount << endl;
    cout << "Student Discount: $" << studentDiscount << endl;
    cout << "Final Bill: $" << finalBill << endl;

    return 0;
}
