#ifndef MAINTENANCE_H
#define MAINTENANCE_H
#include <string>

class Maintenance {
private:
    int ticketId;
    int propertyId;
    std::string description;
    std::string status;
public:
    Maintenance(int tId = 0, int pId = 0, std::string desc = "", std::string stat = "Pending");
    void displayTicket() const;
    int getTicketId() const { return ticketId; }
};
#endif