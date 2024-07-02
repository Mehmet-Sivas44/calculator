#include <iostream>
#include <string>

using namespace std;

int main() {
    string operation;
    double number1, number2;

    cout << "Enter first number: ";
    cin >> number1;

    cout << "Enter the operation (+, -, *, /): ";
    cin >> operation;

    cout << "Enter second number: ";
    cin >> number2;

    if (operation == "+") {
        cout << "Result: " << number1 + number2 << endl;
    }
    else if (operation == "-") {
        cout << "Result: " << number1 - number2 << endl;
    }
    else if (operation == "*") {
        cout << "Result: " << number1 * number2 << endl;
    }
    else if (operation == "/") {
        if (number2 != 0) {
            cout << "Result: " << number1 / number2 << endl;
        }
        else {
            cout << "Error: Division by zero is not allowed." << endl;
        }
    }
    else {
        cout << "Error: Invalid operation." << endl;
    }

    return 0;
}
