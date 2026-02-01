//
// Created by dev on 1/25/26.
//

#ifndef LIBFK_FK_HH
#define LIBFK_FK_HH
#include <string>


class fk
{
public:
    static void msg(int level, std::string message);
    static std::string setStringValueFromFunction();
    static void writeDataToFile(std::string location, std::string data, bool appendMode);
    static std::string readDataFromFile(std::string location);
};


#endif //LIBFK_FK_HH