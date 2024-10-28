// population.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Name: Yochanan Allen 

#include <iostream>

using namespace std;

int main() {
    int startingPopulation;
    double dailyIncrease;
    int days;

    
    do {
        cout << "Enter the starting number of organisms (at least 2): ";
        cin >> startingPopulation;
        if (startingPopulation < 2) {
            cout << "Starting population must be at least 2." << endl;
        }
    } while (startingPopulation < 2);

    
    do {
        cout << "Enter the average daily population increase (as a percentage): ";
        cin >> dailyIncrease;
        if (dailyIncrease < 0) {
            cout << "Daily increase cannot be negative." << endl;
        }
    } while (dailyIncrease < 0);

    
    do {
        cout << "Enter the number of days they will multiply (at least 1): ";
        cin >> days;
        if (days < 1) {
            cout << "Number of days must be at least 1." << endl;
        }
    } while (days < 1);

    
    cout << " Day Population Size" << endl;
    cout << "-------------------------" << endl;

    for (int day = 1; day <= days; day++) {
        cout << day << " Day population size " << startingPopulation << endl;
        startingPopulation += (dailyIncrease / 100) * startingPopulation;
    }

    return 0;
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
