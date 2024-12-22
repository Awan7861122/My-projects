#include "ParkingSystem.h"
#include <iostream>
using namespace std;

int main() {
    ParkingSystem ps(3, 5); // Initialize with 3 levels, 5 spots per level

    int choice;
    string number;
    do {
        cout << "\n--- Parking System ---\n";
        cout << "1. Park Vehicle\n";
        cout << "2. Free Spot\n";
        cout << "3. Display Parking Lot\n";
        cout << "4. Display Available Spots\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "Enter vehicle number: ";
            cin >> number;
            ps.allocateSpot(number, CAR); // Default to car for simplicity
            break;
        case 2:
            cout << "Enter vehicle number: ";
            cin >> number;
            ps.freeSpot(number);
            break;
        case 3:
            ps.displayParkingLot();
            break;
        case 4:
            ps.displayAvailableSpots();
            break;
        case 5:
            cout << "Exiting...\n";
            break;
        default:
            cout << "Invalid choice.\n";
        }
    } while (choice != 5);

    return 0;
}
