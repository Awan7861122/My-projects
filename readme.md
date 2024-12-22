Multi-Level Parking System
A modular C++ program that simulates a multi-level parking system. This project includes functionalities to allocate parking spots to vehicles, manage parking revenue, and provide persistent data storage for parked vehicles.

Table of Contents
Overview
Features
Code Structure
How It Works
Setup Instructions
Usage
Detailed Explanation
Future Enhancements
Overview
The project demonstrates a multi-level parking lot system designed using fundamental data structures like arrays and Binary Search Trees (BST). The system supports real-world functionalities such as parking fee calculation, vehicle type management, and persistent data storage.

Features
Dynamic Vehicle Allocation:

Allocates the nearest available parking spot based on priority (lower levels first).
Supports different vehicle types: cars, bikes, and buses.
Parking Revenue Calculation:

Charges parking fees based on the type of vehicle and duration.
Persistent Storage:

Saves parking data to a file and reloads it during subsequent runs.
User-Friendly Interface:

Menu-driven program for easy interaction.
Detailed Reports:

Displays parking lot status, available spots, and total revenue collected.
Code Structure
The program is divided into multiple files for better modularity and maintainability:

bash

MultilevelParking/
├── main.cpp          # Entry point of the program
├── Vehicle.h         # Vehicle class definition
├── Vehicle.cpp       # Implementation of vehicle-related functions
├── ParkingSystem.h   # ParkingSystem class definition
├── ParkingSystem.cpp # Implementation of parking lot functionalities
└── parking_data.txt  # File for saving and loading parking data
How It Works
Initialization:

The parking system is initialized with a specified number of levels and spots per level.
A 2D array represents the parking lot, and a Binary Search Tree (BST) manages available spots dynamically.
Vehicle Parking:

A vehicle is assigned the nearest available spot.
The spot is marked as occupied, and the vehicle's details are stored.
Fee Calculation:

When a vehicle leaves, the system calculates the parking fee based on the duration and type of vehicle.
Data Persistence:

Active parking data is saved to a file (parking_data.txt) when the program exits and reloaded during the next run.
Reports:

The system generates detailed reports showing the parking lot's status and revenue.
Setup Instructions
Prerequisites
C++ compiler (e.g., GCC or MinGW)
Text editor or IDE (e.g., VS Code, Code::Blocks, or CLion)
Compilation
Clone or download the project files into a folder.
Open a terminal and navigate to the project directory.
Compile the program using the following command:
bash
Copy code
g++ main.cpp ParkingSystem.cpp Vehicle.cpp -o ParkingSystem
Execution
Run the compiled program:

bash
Copy code
./ParkingSystem
Usage
When the program starts, a menu is displayed with the following options:

Park Vehicle: Allocate a parking spot for a vehicle by entering its number.
Free Spot: Remove a parked vehicle by entering its number.
Display Parking Lot: Show the status of the parking lot (occupied/free spots).
Display Available Spots: List all available parking spots.
Exit: Save data and exit the program.
Example
Park a vehicle with number "CAR123".
Free the spot for vehicle "CAR123".
View available spots and parking lot status.
Detailed Explanation
1. Vehicle Class
The Vehicle class represents a vehicle parked in the lot.
Attributes:
numberPlate: Unique identifier for the vehicle.
type: Vehicle type (CAR, BIKE, or BUS).
entryTime: Time when the vehicle entered the parking lot.
Method:
calculateFee(): Computes the parking fee based on the duration and type of vehicle.
2. Parking System Class
Manages the parking lot, spot allocation, and revenue tracking. Key components:

2D Array (parkingLot):

Represents the parking structure with levels and spots.
Each spot can be free ([ ]) or occupied ([X]).
Binary Search Tree (BST):

Dynamically manages available spots.
Provides efficient allocation based on the nearest available spot.
Persistent Data:

Saves active parking data to parking_data.txt on program exit.
Reloads data during initialization.
Methods:
allocateSpot(vehicleNumber, type):
Finds and allocates the nearest available spot to the vehicle.
freeSpot(vehicleNumber):
Frees a spot, calculates the fee, and adds the spot back to the BST.
displayParkingLot():
Shows the parking lot status.
displayAvailableSpots():
Lists available spots using an in-order traversal of the BST.
saveDataToFile() / loadDataFromFile():
Manages data persistence.
3. Menu (main.cpp)
Handles user interactions through a simple menu:

Provides options to park vehicles, free spots, display the lot, and exit.
Calls methods from the ParkingSystem class to perform operations.
Future Enhancements
Enhanced Vehicle Types:
Support for additional vehicle categories, such as electric vehicles or trucks.
Spot Reservation:
Allow users to reserve spots in advance.
Graphical User Interface (GUI):
Create a GUI for better visualization and usability.
Multi-threaded Support:
Handle simultaneous parking and exit requests.
Integration with Sensors:
Use IoT sensors to detect vehicle entry/exit in real-time.
Contact
For any questions or suggestions, feel free to contact:

Developer:

Name: Muhammad Awais Mushtaq
Email: a.awaisawan.comsian@gmail.com
