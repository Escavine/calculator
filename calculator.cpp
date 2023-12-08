/* calculator */
#include <iostream>
using namespace std;


void addition(double num1, double num2)
{
    int total = 0;
    
    total = num1 + num2;
    cout << "The total is: " << total << endl;
}


void subtraction(double num1, double num2) 
{
    int total = 0;
    
    total = num1 - num2;
    cout << "The total is: " << total << endl;
}


void division(double num1, double num2) {
    int total = 0;
    
    total = num1 / num2;
    cout << "The total is: " << total << endl;
}



void multiplication(double num1, double num2) 
{
    int total = 0;
    
    total = num1 * num2;
    cout << "The total is: " << total << endl;
}


int main() 
{
    double num1; /* defining the data-types */
    double num2;
    string determiner; /* determines the operation */
    bool s = true; /* this will be used as a base case */
    
    
    
    cout << "Enter first number: ";
    cin >> num1;
    
    cout << "Enter second number "; 
    cin >> num2;
    
    cout << "There are four operations (add, sub, mut, div), pick from between the four: (say end if you want to end the session) ";
    cin >> determiner;
    /* user picks either operation which utilises a function call to perform it */
    
    
    if(determiner == "add") 
    {
        cout << "Numbers will be added ";
        addition(num1, num2);
        
    } else if(determiner == "sub") {
        cout << "Numbers will be subtracted ";
        subtraction(num1, num2);
        
    } else if(determiner == "div") {
        cout << "Numbers will be divided ";
        division(num1, num2);
        
    } else if(determiner == "mut") {
        cout << "Numbers will be multipled ";
        multiplication(num1, num2);
        
    } else if(determiner == "end") {
        abort();
    }
    
    return 0;
}
