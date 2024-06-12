#ifndef SMARTCALCULATOR_H
#define SMARTCALCULATOR_H

class SmartCalculator {
private:
    int result;

public:
    SmartCalculator(int initialValue);  // Constructor
    SmartCalculator& add(int value);
    SmartCalculator& subtract(int value);
    SmartCalculator& multiply(int value);
    SmartCalculator& divide(int value);
    int getResult();
};

#endif
