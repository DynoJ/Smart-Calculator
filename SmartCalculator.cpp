#include "SmartCalculator.h"
#include <iostream>

SmartCalculator::SmartCalculator(int initialValue) : result(initialValue) {}

SmartCalculator& SmartCalculator::add(int value) {
    result += value;
    return *this;
}

SmartCalculator& SmartCalculator::subtract(int value) {
    result -= value;
    return *this;
}

SmartCalculator& SmartCalculator::multiply(int value) {
    result *= value;
    return *this;
}

SmartCalculator& SmartCalculator::divide(int value) {
    if (value != 0) {
        result /= value;
    } else {
        std::cerr << "Error: Division by zero" << std::endl;
    }
    return *this;
}

int SmartCalculator::getResult() {
    return result;
}
