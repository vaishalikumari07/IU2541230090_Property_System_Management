#ifndef OWNER_H
#define OWNER_H
#include "Person.h"

class Owner : public Person {
private:
    int propertyOwnedId;
public:
    Owner(int id = 0, std::string name = "", std::string phone = "", int propId = 0);
    void displayDetails() const override;
};
#endif