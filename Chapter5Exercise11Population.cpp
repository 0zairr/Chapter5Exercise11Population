/*
File name:  Chapter5Exercise11Population.cpp
Prpgrammer: Ozair Ghaissi
Date: 11/26/2024
*/ 

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    // Variables
    int startingPopulation;
    double dailyIncreasePercentage;
    int numberOfDays;

    // Input: Starting number of organisms
    do {
        cout << "Enter the starting number of organisms (minimum 2): ";
        cin >> startingPopulation;
        if (startingPopulation < 2) {
            cout << "Error: Starting population must be at least 2.\n";
        }
    } while (startingPopulation < 2);

    // Input: Average daily population increase percentage
    do {
        cout << "Enter the average daily population increase (percentage, non-negative): ";
        cin >> dailyIncreasePercentage;
        if (dailyIncreasePercentage < 0) {
            cout << "Error: Population increase percentage cannot be negative.\n";
        }
    } while (dailyIncreasePercentage < 0);

    // Input: Number of days the population will multiply
    do {
        cout << "Enter the number of days the organisms will multiply (minimum 1): ";
        cin >> numberOfDays;
        if (numberOfDays < 1) {
            cout << "Error: The number of days must be at least 1.\n";
        }
    } while (numberOfDays < 1);

    // Calculate and display population growth
    double population = startingPopulation;
    cout << fixed << setprecision(2);
    cout << "\nDay\tPopulation\n";
    cout << "-----------------\n";

    for (int day = 1; day <= numberOfDays; ++day) {
        cout << day << "\t" << population << endl;
        population += population * (dailyIncreasePercentage / 100.0);
    }

    return 0;
}
