#include <iostream>

int main() {

    int num1 = 10;
    int num2 = 20;
    int num3 = 30;

    
    int addition = num1 + num2 + num3;
    int subtraction = num1 - num2 - num3;
    int multiplication = num1 * num2 * num3;
    float division = (float)num1 / num2;

    cout << "Result of addition: " << addition << endl;
    cout << "Result of subtraction: " << subtraction << endl;
    cout << "Result of multiplication: " << multiplication << endl;
    cout << "Result of division: " << division << endl;

    return 0;
}