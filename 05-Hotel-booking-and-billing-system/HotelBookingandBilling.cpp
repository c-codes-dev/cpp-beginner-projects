#include<iostream>
using namespace std;

// 1. Calculate room cost
int calculateRoomCost(int price, int nights){
    return price * nights;
}

// 2. Display customer information
void customerInfo(string name, int age){
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
}

// 3. Display room type
void roomType(int choice){
    switch(choice){
        case 1:
            cout << "Room: Single Room" << endl;
            break;

        case 2:
            cout << "Room: Double Room" << endl;
            break;

        case 3:
            cout << "Room: Deluxe Room" << endl;
            break;

        default:
            cout << "Invalid room choice" << endl;
    }
}

// 4. Get room price
int getRoomPrice(int choice){
    switch(choice){
        case 1:
            return 5000;

        case 2:
            return 8000;

        case 3:
            return 12000;

        default:
            cout << "Invalid room choice" << endl;
            return 0;
    }
}

// 5. Calculate discount
double calculateDiscount(double bill, int age){
    return (age >= 65) ? bill * 0.10 : 0;
}

int main(){

    string name;
    int age;
    int choice;
    int nights;

    // Get customer information
    cout << "Enter your name: ";
    cin >> name;

    cout << "Enter your age: ";
    cin >> age;

    // Choose room
    cout << "\n1. Single Room - 5000 per night" << endl;
    cout << "2. Double Room - 8000 per night" << endl;
    cout << "3. Deluxe Room - 12000 per night" << endl;

    cout << "Enter room choice: ";
    cin >> choice;

    cout << "Enter number of nights: ";
    cin >> nights;

    // Calculate price
    int price = getRoomPrice(choice);

    // Calculate total bill
    int bill = calculateRoomCost(price, nights);

    // Calculate discount
    double discount = calculateDiscount(bill, age);

    // Final bill
    double finalBill = bill - discount;

    // Display receipt
    cout << "\n----- HOTEL BILL -----" << endl;

    customerInfo(name, age);
    roomType(choice);

    cout << "Nights: " << nights << endl;
    cout << "Room Cost: " << bill << endl;
    cout << "Discount: " << discount << endl;
    cout << "Final Bill: " << finalBill << endl;

    return 0;
}
