#include <iostream>
using namespace std;

int main(){

    char package;
    double hours;
    double total = 0.0;

    cout << "internet service package\n";
    cout << "Package A: 9.95 per month (10 hours, 2.00 per extra hour )\n";
    cout << "Package B: 14.95 per month (20 hours, 1.00 per extra hour )\n";
    cout << "Package C: 19.95 per month (Unlimited)\n";
    cout << "Chose a package (A, B, or C): ";

    cin>> package;

    cout << "Enter hours used: ";
    cin>> hours;

    if ((package != 'A' && package != 'a' && 
    package != 'B' && package != 'b' &&
    package != 'C' && package != 'c') ||
    (hours < 0 || hours > 744)) {
        cout << "Error: Invalid Input." << endl;
        
        return 0;

    }

    if (package == 'A' || package == 'a'){
        total = 9.95;
        
        if (hours > 10){
            total += (hours - 10) * 2;
        }

     }
     else if (package == 'B' || package == 'b'){
        total = 14.95;
        
        if (hours > 20){
            total += (hours - 20) *1;
        } 
   
    }
    else if (package == 'C' || package == 'c'){
        total = 19.95;
    }
cout << "Your total monthly bill is: $" << total << endl;

    return 0;
    
}