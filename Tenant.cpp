#include "Tenant.h"
#include <iostream>

Tenant::Tenant(int id, std::string name, std::string phone, int rentPropId, double lease)
    : Person(id, name, phone), rentedPropertyId(rentPropId), leaseAmount(lease) {}

void Tenant::displayDetails() const {
    std::cout << "[Tenant] ";
    Person::displayDetails();
    std::cout << " | Rented Property ID: " << rentedPropertyId << " | Lease: $" << leaseAmount << "\n";
}