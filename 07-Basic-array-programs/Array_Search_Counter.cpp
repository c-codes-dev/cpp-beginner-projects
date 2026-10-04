#include<iostream>
using namespace std;

int main(){

    int num[7] = {4, 8, 4, 12, 6, 4, 10};
    int search;
    int count = 0;

    cout << "Enter number to search: ";
    cin >> search;

    for(int i=0; i<7; i++){
        if(num[i] == search){
            count++;
        }
    }

    cout << "Number appears " << count << " times";

    return 0;
}
