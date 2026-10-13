#include "Owner.h"
#include <iostream>

Owner::Owner(int id, std::string name, std::string phone, int propId)
    : Person(id, name, phone), propertyOwnedId(propId) {}

void Owner::displayDetails() const {
    std::cout << "[Owner] ";
    Person::displayDetails();
    std::cout << " | Property ID Owned: " << propertyOwnedId << "\n";
}