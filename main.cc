/////////////////////////////////////////
// Created by Filip Kristan. v20260208 //
/////////////////////////////////////////

#include "libFK.hh"
#include <iostream>

std::string addZeroes(int zeroNumberLength, int number) {
    std::string padding = "";
    std::string numberString = std::to_string(number);
    int numberLength = numberString.length();
    for (int i = 0; i < zeroNumberLength - numberLength; ++i) {
        padding.append("0");
    }
    std::string result = padding + std::to_string(number);
    return result;
}

int main()
{
    // Print colored messages
    fk::msg(1, "Level 1: OK response.");
    fk::msg(2, "Level 2: Warning.");
    fk::msg(3, "Level 3: Error.");

    // Set value to a string using a function
    std::string greeting = fk::setStringValueFromFunction();
    fk::msg(1, greeting);

    // Write data to file
    fk::writeDataToFile("test.txt", "Testing!", false); // Replaces all text with new data
    fk::writeDataToFile("test.txt", "And appending some more data!", true); // Appends new data in new line

    // Read data and set it's contents to a string
    std::string dataReadFromFile = fk::readDataFromFile("test.txt");
    fk::msg(1, "Data stored in the file: " + dataReadFromFile);

    // Convert decimal number to Hex and vise versa
    int decValue = fk::hexToDecimal("539");
    std::string hexValue = fk::decimalToHex(decValue);
    fk::msg(1, "DEC: " + std::to_string(decValue));
    fk::msg(1, "HEX: " + hexValue );

    // Append 0s before a number depending on the function parameters
    std::string paddedNumber = addZeroes( 6, 1337);
    fk::msg(1, "Padded number: " + paddedNumber );

    return 0;
}
