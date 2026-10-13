#include "FileManager.h"
#include <fstream>
#include <iostream>

void FileManager::saveProperties(const std::vector<Property>& properties) {
    std::ofstream outFile("properties.txt");
    for (const auto& p : properties) {
        outFile << p.getId() << "|" << p.getAddress() << "|" << p.getStatus() << "\n";
    }
    outFile.close();
    std::cout << "Writing properties.txt... Done.\n";
}

std::vector<Property> FileManager::loadProperties() {
    std::vector<Property> properties;
    std::ifstream inFile("properties.txt");
    // Parsing stream logic
    inFile.close();
    return properties;
}