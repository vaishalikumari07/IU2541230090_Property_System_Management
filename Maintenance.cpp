#include "Maintenance.h"
#include <iostream>

Maintenance::Maintenance(int tId, int pId, std::string desc, std::string stat)
    : ticketId(tId), propertyId(pId), description(desc), status(stat) {}

void Maintenance::displayTicket() const {
    std::cout << "Ticket ID: " << ticketId << " | Property ID: " << propertyId 
              << " | Issue: " << description << " | Status: " << status << "\n";
}