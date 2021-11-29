/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Victor Urena
 */

#include "std_lib_facilities.h"

void mathOperation(String operation, double operandOne, double operandTwo)
{
    double result;

    if (operation == "+")
    {
        result = operandOne + operandTwo;
    }
    else if (operation == "-")
    {
        result = operandOne - operandTwo;
    }
    else if (operation == "*")
    {
        result = operandOne * operandTwo;
    }
    else if (operation == "/")
    {
        result = operandOne / operandTwo;
    }

    cout << "The answer is " << result << "\n";
}

int main()
{
    String symbol;
    double numOne, numTwo;

    cout << "Enter an operation (+,-,*,/) followed by two operands, all separated by spaces (Ex: \"+ 100 3.14\"): ";
    
    cin >> symbol >> numOne >> numTwo;

    mathOperation(symbol, numOne, numTwo);
}