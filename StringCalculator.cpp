#include "StringCalculator.h"
#include <sstream>
#include <algorithm>
 
int StringCalculator::add(const std::string& input) {
    if (isEmptyOrZero(input)) {
        return 0;
    }
    std::string normalizedInput = normalizeDelimiters(input);
    checkForNegativeNumbers(normalizedInput);
    return sumOfNumbers(normalizedInput);
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

void StringCalculator::checkForNegativeNumbers(const std::string& input) {
    std::istringstream stream(input);
    std::string number;
    while (std::getline(stream, number, ',')) {
        if (std::stoi(number) < 0) {
            throw std::runtime_error("Negative numbers not allowed");
        }
    }
}

std::string StringCalculator::normalizeDelimiters(const std::string& input) {
    std::string result = input;
    std::replace(result.begin(), result.end(), '\n', ',');
    return result;
}
