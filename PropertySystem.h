#ifndef PROPERTYSYSTEM_H
#define PROPERTYSYSTEM_H
#include <vector>
#include "Property.h"

class PropertySystem {
private:
    std::vector<Property> properties;
public:
    void addProperty();
    void displayProperties() const;
    void searchProperty() const;
    void saveData() const;
    void loadData();
};
#phpendif // PROPERTYSYSTEM_H