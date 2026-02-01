#include "libFK.hh"

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

    return 0;
}
