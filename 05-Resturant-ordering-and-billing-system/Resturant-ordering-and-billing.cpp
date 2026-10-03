#include<iostream>
using namespace std;

// Display selected item
void getItem(int choice){
    switch(choice){
        case 1:
            cout<<"1-Burger"<<endl;
            break;
        case 2:
            cout<<"2-Pizza"<<endl;
            break;
        case 3:
            cout<<"3-Pasta"<<endl;
            break;
        case 4:
            cout<<"4-Sandwich"<<endl;
            break;
        default:
            cout<<"Invalid choice"<<endl;
    }
}

// Get item price
int itemPrice(int choice){
    switch(choice){
        case 1:
            return 500;
        case 2:
            return 800;
        case 3:
            return 600;
        case 4:
            return 400;
        default:
            cout<<"Invalid choice"<<endl;
            return 0;
    }
}

// Calculate cost of one order
int totalCost(int price, int quantity){
    return price * quantity;
}

// Calculate discount
double discountShow(int bill){
    return (bill >= 5000) ? bill * 10 / 100 : 0;
}

int main(){

    string name;
    int choice;
    int quantity;

    cout<<"Enter your name: ";
    cin>>name;

    cout<<"===== MENU ====="<<endl;
    cout<<"1-Burger - 500"<<endl;
    cout<<"2-Pizza - 800"<<endl;
    cout<<"3-Pasta - 600"<<endl;
    cout<<"4-Sandwich - 400"<<endl;

    // This stores the cost of ALL orders
    int totalBill = 0;

    // We will use this to decide whether to order again
    char again = 'y';

    while(again == 'y'){

        cout<<"\nEnter your choice: ";
        cin>>choice;

        cout<<"Enter quantity: ";
        cin>>quantity;

        // Get price using function
        int price = itemPrice(choice);

        // Calculate this particular order
        int cost = totalCost(price, quantity);

        // Add this order to the previous total
        totalBill = totalBill + cost;

        cout<<"Do you want to order another item? (y/n): ";
        cin>>again;
    }

    // Calculate discount on the COMPLETE bill
    double discount = discountShow(totalBill);

    double finalBill = totalBill - discount;

    cout<<"\n===== RECEIPT ====="<<endl;
    cout<<"Customer: "<<name<<endl;
    cout<<"Total Bill: "<<totalBill<<endl;
    cout<<"Discount: "<<discount<<endl;
    cout<<"Final Bill: "<<finalBill<<endl;

    return 0;
}
