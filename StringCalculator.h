#ifndef STRINGCALCULATOR_H
#define STRINGCALCULATOR_H
 
#include <string>
 
class StringCalculator {
public:
    int add(const std::string& input);

private:
 bool isEmptyOrZero(const std::string& input);
 int sumOfNumbers(const std::string& input);
 void checkForNegativeNumbers(const std::string& input);
 std::string normalizeDelimiters(const std::string& input);
};
 
#endif // STRINGCALCULATOR_H
