#include "StringCalculator.h"
#include <sstream>
 
int StringCalculator::add(const std::string& input) {
    if (isEmptyOrZero(input)) {
        return 0;
    }
    return sumOfNumbers(input);
}

bool StringCalculator::isEmptyOrZero(const std::string& input) {
    return input.empty() || input == "0";
}
 
int StringCalculator::sumOfNumbers(const std::string& input) {
    std::istringstream stream(input);
    std::string number;
    int sum = 0;
    while (std::getline(stream, number, ',')) {
        sum += std::stoi(number);
    }
    return sum;
}
