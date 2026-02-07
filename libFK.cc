//
// Created by filip on January 25th 2026.
// Release: February 7th 2026. (20260207)
//

//#include <libFK/libFK.hh>
#include "libFK.hh"
#include <fstream>
#include <iostream>
#include <sstream>
#include <vector>

// void fk::example() {}

void fk::msg(int level, std::string message)
{
    std::string prefix = "";
    if (level == 0)
    {
        prefix = "[" + std::string("\033[32m") + " OK " + "\033[0m" + "] ";
    }
    else if (level == 1)
    {
        prefix = "[" + std::string("\033[32m") + " !! " + "\033[0m" + "] ";
    }
    else if (level == 2)
    {
        prefix = "[" + std::string("\033[33m") + " !! " + "\033[0m" + "] ";
    }
    else
    {
        prefix = "[" + std::string("\033[31m") + " !! " + "\033[0m" + "] ";
    }

    std::cout << prefix << message << std::endl;
};

// Function definition with std::string return type
std::string fk::setStringValueFromFunction() {
    return std::string("Hello from a C++ function!");
}

// Write text to a file (Replaces all data with set text)
void fk::writeDataToFile(std::string location, std::string data, bool appendMode) {
    std::ofstream file;
    if (appendMode)
    {
        file.open(location, std::ios::app);
    }
    else
    {
        file.open(location, std::ios::out);
    }

    if (file.is_open())
    {
        file << data << "\n";
        file.close();
    }
    else
        std::cout << "File was closed!" << "\n";
}

std::string fk::readDataFromFile(std::string location) {
    std::ifstream stream(location);
    std::string data;
    if (stream) {
        std::ostringstream ss;
        ss << stream.rdbuf();
        data = ss.str();
    } else {
        std::cout << "Unable to read data from the file!" <<'\n';
        std::cout << "File location: " << location <<'\n';
    }
    return "\n" + data;
}

std::string fk::decimalToHex(int decimal_value) {

    std::stringstream ss;
    ss << std::hex << decimal_value;
    std::string res ( ss.str() );

    return res;
}

int fk::hexToDecimal(std::string hex_value) {
    int decimal_value = *"0";
    std::stringstream ss;
    ss << hex_value;
    ss >> std::hex >> decimal_value;

    return decimal_value;
}