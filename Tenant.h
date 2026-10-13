#ifndef TENANT_H
#define TENANT_H
#include "Person.h"

class Tenant : public Person {
private:
    int rentedPropertyId;
    double leaseAmount;
public:
    Tenant(int id = 0, std::string name = "", std::string phone = "", int rentPropId = 0, double lease = 0.0);
    void displayDetails() const override;
};
#endif