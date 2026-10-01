#include <iostream>
using namespace std;

int main()
{
    int age;
    char student;
    int price=0;

    cout << "Enter your age: ";
    cin >> age;

    cout << "Are you a student? (Y/N): ";
    cin >> student;

    // Determine base ticket price
    if (age <= 12)
    {
        price = 5;
        cout << "Child : Base price is $5" << endl;
    }
    else if (age >= 13 && age <= 64)
    {
        price = 12;
        cout << "Adult : Base price is $12" << endl;
    }
    else if (age >= 65)
    {
        price = 8;
        cout << "Senior : Base price is $8" << endl;
    }
    else
    {
        cout << "Invalid age!" << endl;
        return 0;
    }

    // Check student discount using conditionl operator 
    price =(student =='y' || student =='Y'?(price-2):price );

    cout << "Final Ticket Price: $" << price << endl;

    // Print message using switch
    switch (price)
    {
        case 5:
            cout << "Enjoy the movie kiddo ;)" << endl;
            break;

        case 10:
            cout << "Enjoy discounted student!" << endl;
            break;

        default:
            cout << "Hehe no discount Enjoy standard movie experience ;)" << endl;
            break;
    }

    return 0;
}
