/* calculator with switch function and recursion techniques */
#include <iostream>
using namespace std;


void operationDeterminer(double a, double b, char operation) {
    
    cout << "Which following operation would you like to perform (+, -, /, *): " << endl;
    cin >> operation;

    switch (operation) {
        case '+': {
            int total;
            total = a + b;
            cout << "The total for addition of the following values is: " << total << endl;
            break;
        }
        case '-': {
            int total;
            total = a - b;
            cout << "The total for subtracting the following values is: " << total << endl;
            break;
        }
        case '/': {
            int total;
            total = a / b;
            cout << "The total for dividing the following values is: " << total << endl;
            break;
        }
        case '*': {
            int total;
            total = a * b;
            cout << "The total for multiplying the following values is: " << total << endl;
            break;
        }
        default: {
            cout << "Invalid operation" << endl;
            operationDeterminer(a, b, operation);
        }
    }
}



int main() 
{
    char choice;
    do {
        double a, b; /* both values will be added */
        char operation;
    
        cout << "Enter the first number: " << endl;
        cin >> a; /* store given value to a */
    
        cout << "Enter the second number: " << endl;
        cin >> b; /* store given value to b */
    
        operationDeterminer(a, b, operation);
        
        cout << "Would you like to perform another calculation? (y/n) " << endl;
        cin >> choice;
    
    } while (choice == 'y' || choice == 'Y');
    
    return 0;
}