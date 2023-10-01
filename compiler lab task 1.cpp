#include <iostream>
#include <string>
#include <sstream>

bool isNumeric(const std::string& input) {
    std::istringstream iss(input);
    double value;
    iss >> std::noskipws >> value;
    return iss.eof() && !iss.fail();
}

int main() {
    std::string userInput;
    std::cout << "Please enter your input: ";
    std::getline(std::cin, userInput);

    if (isNumeric(userInput)) {
        std::cout << "The input is numeric." << std::endl;
    } else {
        std::cout << "The input is non-numeric." << std::endl;
    }

    return 0;
}
