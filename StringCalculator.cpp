#include "StringCalculator.h"
#include <sstream>
 
int StringCalculator::add(const std::string& input) {
    if (input.empty() || input == "0") {
        return 0;
    }
 
    std::istringstream stream(input);
    std::string number;
    int sum = 0;

    while (std::getline(stream, number, ',')) {
     sum += std::stoi(number);
    }
    return sum; 
}
