#include "Person.h"
#include <iostream>

Person::Person(int id, std::string name, std::string phone) : id(id), name(name), phone(phone) {}

void Person::displayDetails() const {
    std::cout << "ID: " << id << " | Name: " << name << " | Phone: " << phone;
}