#include <iostream>
#include "SmartCalculator.h"

int main() {
    SmartCalculator calculator(2);
    int value = calculator.add(2).multiply(2).getResult();
    std::cout << "Result: " << value << std::endl;
    return 0;
}
