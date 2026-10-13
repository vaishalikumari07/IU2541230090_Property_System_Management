#include "PropertySystem.h"
#include "FileManager.h"
#include <iostream>

void PropertySystem::addProperty() {
    int id;
    std::string address, type, status;
    double rent;
    std::cout << "Enter Property ID: ";
    std::cin >> id;
    std::cin.ignore();
    std::cout << "Enter Address: ";
    std::getline(std::cin, address);
    std::cout << "Enter Type: ";
    std::cin >> type;
    std::cout << "Enter Rent Amount: ";
    std::cin >> rent;
    properties.push_back(Property(id, address, type, rent, "Occupied"));
    std::cout << "Property added successfully!\n";
}

void PropertySystem::displayProperties() const {
    for (const auto& p : properties) {
        p.displayProperty();
    }
}

void PropertySystem::searchProperty() const {
    int id;
    std::cout << "Enter Property ID to search: ";
    std::cin >> id;
    for (const auto& p : properties) {
        if (p.getId() == id) {
            p.displayProperty();
            return;
        }
    }
    std::cout << "Record not found.\n";
}

void PropertySystem::saveData() const {
    FileManager::saveProperties(properties);
}

void PropertySystem::loadData() {
    properties = FileManager::loadProperties();
}