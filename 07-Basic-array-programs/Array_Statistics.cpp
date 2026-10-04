#include<iostream>
using namespace std;

int main(){

    int num[5] = {20, 5, 70, 40, 90};

    int sum = 0;
    int largest = num[0];
    int smallest = num[0];

    for(int i=0; i<5; i++){
        sum = sum + num[i];

        if(num[i] > largest){
            largest = num[i];
        }

        if(num[i] < smallest){
            smallest = num[i];
        }
    }

    cout << "Sum = " << sum << endl;
    cout << "Largest = " << largest << endl;
    cout << "Smallest = " << smallest << endl;

    return 0;
}
