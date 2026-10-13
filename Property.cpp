#include "Property.h"
#include <iostream>

Property::Property(int id, std::string addr, std::string t, double rent, std::string st)
    : propertyId(id), address(addr), type(t), rentAmount(rent), status(st) {}

void Property::displayProperty() const {
    std::cout << "[ID: " << propertyId << " | Address: " << address 
              << " | Type: " << type << " | Rent: $" << rentAmount 
              << " | Status: " << status << "]\n";
}