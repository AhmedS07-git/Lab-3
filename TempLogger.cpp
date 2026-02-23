#include <iostream>
#include <fstream>

using namespace std;

int main(){
    int days;
    double temp;

    ofstream outFile("temperature.txt");

    if (!outFile){
        cout << "Error opening file!" << endl;
        return 1;
    }

    cout << "How many days of temperature would you like to record? ";
    cin >> days;

    for (int i=1; i <= days; i++){
        cout << "Enter temperature for Day " << i << ": ";
        cin >> temp;

        outFile << temp << endl;
    }
    outFile.close();

    cout << "Temperature saved to temperatures.txt" << endl;

    return 0;
}