#ifndef PROPERTY_H
#define PROPERTY_H
#include <string>

class Property {
private:
    int propertyId;
    std::string address;
    std::string type;
    double rentAmount;
    std::string status;
public:
    Property(int id = 0, std::string addr = "", std::string t = "", double rent = 0.0, std::string st = "Available");
    void displayProperty() const;
    int getId() const { return propertyId; }
    std::string getAddress() const { return address; }
    std::string getStatus() const { return status; }
};
#endif