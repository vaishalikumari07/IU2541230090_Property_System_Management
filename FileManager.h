#ifndef FILEMANAGER_H
#define FILEMANAGER_H
#include <vector>
#include "Property.h"

class FileManager {
public:
    static void saveProperties(const std::vector<Property>& properties);
    static std::vector<Property> loadProperties();
};
#endif