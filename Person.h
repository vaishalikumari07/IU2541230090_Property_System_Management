#ifndef PERSON_H
#define PERSON_H
#include <string>

class Person {
protected:
    int id;
    std::string name;
    std::string phone;
public:
    Person(int id = 0, std::string name = "", std::string phone = "");
    virtual void displayDetails() const;
    int getId() const { return id; }
    virtual ~Person() {}
};
#endif