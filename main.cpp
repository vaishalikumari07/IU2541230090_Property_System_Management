#include <iostream>
#include "PropertySystem.h"

int main() {
    PropertySystem system;
    int choice;
    do {
        std::cout << "\n========== PROPERTY MANAGEMENT SYSTEM ==========\n";
        std::cout << "1. Add Record\n2. Display Records\n3. Search Record\n4. Save/Load Data\n5. Exit\n";
        std::cout << "================================================\n";
        std::cout << "Enter your choice: ";
        std::cin >> choice;
        switch (choice) {
            case 1: system.addProperty(); break;
            case 2: system.displayProperties(); break;
            case 3: system.searchProperty(); break;
            case 4: system.saveData(); break;
            case 5: std::cout << "Exiting...\n"; break;
            default: std::cout << "Invalid choice!\n";
        }
    } while (choice != 5);
    return 0;
}