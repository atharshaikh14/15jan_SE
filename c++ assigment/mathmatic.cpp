#include <iostream>

using namespace std;

// Function to add two numbers
int math_operation(int num1, int num2) {
    return num1 + num2;
}

// Function to subtract two numbers
int math_operation(int num1, int num2, char operation) {
    if (operation == '-') {
        return num1 - num2;
    }
    else {
        return -1;
    }
}

// Function to multiply two numbers
int math_operation(int num1, int num2, bool isMultiplication) {
    if (isMultiplication) {
        return num1 * num2;
    }
    else {
        return -1;
    }
}

// Function to divide two numbers
float math_operation(float num1, float num2) {
    return num1 / num2;
}

int main() {
    int num1 = 10;
    int num2 = 5;
    char operation = '-';
    bool isMultiplication = true;

    cout << "Addition of " << num1 << " and " << num2 << " is " << math_operation(num1, num2) << endl;
    cout << "Subtraction of " << num1 << " and " << num2 << " is " << math_operation(num1, num2, operation) << endl;
    cout << "Multiplication of " << num1 << " and " << num2 << " is " << math_operation(num1, num2, isMultiplication) << endl;
    cout << "Division of " << num1 << " and " << num2 << " is " << math_operation(float(num1), float(num2)) << endl;

    return 0;
}