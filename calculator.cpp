#include <iostream>
using namespace std;

int main() {
    double num1, num2, result;
    char operation;
    char choice;

    do{
        cout << "\n==========  Calculator  ==========\n" << endl;
        cout << "Enter first number:";
        cin >> num1;

        cout << "Enter operator (+,-,*,/):";
        cin >> operation;

        cout << "Enter second number:";
        cin >> num2;

        bool validOperation = true;

        switch (operation) {
            case '+':
                result = num1 + num2;
                break;
            case '-':
                result = num1 - num2;
                break;
            case '*':
                result = num1 * num2;
                break;
            case '/':
                if (num2 != 0) {
                    result = num1 / num2;
                } else {
                    cout << "Error: Division by zero is not allowed." << endl;
                    validOperation = false;
                }
                break;
            default:
                cout << "Error: Invalid operator." << endl;
                validOperation = false;
        }

        if (validOperation) {
            cout << "Result: " << num1 << " " << operation << " " << num2 << " = " << result << endl;
        }

        cout << "Do you want to perform another calculation? (y/n): ";
        cin >> choice;

    } while (choice == 'y' || choice == 'Y');

    cout << "Thank you for using the calculator. Goodbye!" << endl;     
    return 0;

}