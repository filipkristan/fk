/////////////////////////////////////////
// Created by Filip Kristan. v20260208 //
/////////////////////////////////////////

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
    static std::string decimalToHex(int decimal_value);
    static int hexToDecimal(std::string hex_value);
};


#endif //LIBFK_FK_HH
