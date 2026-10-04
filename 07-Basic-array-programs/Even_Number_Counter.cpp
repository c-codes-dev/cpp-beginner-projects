#include<iostream>
using namespace std;

int main(){

    int num[6] = {5, 30, 12, 51, 8, 40};
    int even = 0;

    for(int i=0; i<6; i++){
        if(num[i] % 2 == 0){
            even++;
        }
    }

    cout << "Even numbers = " << even;

    return 0;
}
