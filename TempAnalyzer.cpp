#include <iostream>
#include <fstream>

using namespace std;

int main(){
    ifstream inFile("temperature.txt");

    if (!inFile){
        cout << "Error opening file!" << endl;
        return 1;

    }
    double temp;
    double sum = 0;
    int count = 0;

    while (inFile >> temp ){
        sum += temp;
        count++;
    }
    inFile.close();

    double average = sum / count;

    cout << "Temperatures anaylyzed for " << count << "days." << endl;
    cout << "The average temperature was: " << average << endl;
    
    return 0;
}