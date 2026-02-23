#include <iostream>
using namespace std;

int main(){
    int numbers;
    int sum = 0;
    
    cout << "Enter a positive number to add to the sum, :";
    cout << "Enter a negative number to quit: ";
    cin >> numbers;

    while (numbers >=0){
        sum += numbers;

        cout << "Enter a positive number to add to the sum, :";
        cout << "Enter a negative number to quit: ";
        cin >> numbers;

    }
    cout << "\nThe final sum is: " << sum << endl;

    return 0;

}