//******************************************************************************
// PROJECT: Lab 5 Part 1
// FILE: lab5-1.cpp
//
// DESCR: This project will help you learn the difference between the C++
// assignment operator = and the C++ relational equality operator ==.
// They are completely different operators and they work in completely
// different ways.
//
// AUTHOR: Austin Jones <akjone29@asu.edu>
// DATE: Oct 29th, 2023
//******************************************************************************
#include <iostream>
using namespace std;
int main()
{
int num1; // num1 is not initialized
int num2 = 5; // num2 has been initialized to 5
cout << "Please enter an integer" << endl;
cin >> num1;
cout << "num1 = " << num1 << " and num2 = " << num2 << endl;
if (num1 = num2)
cout << "Hey, that’s a coincidence!" << endl;
if (num1 != num2)
cout << "The values are not the same" << endl;
return 0;
}
// End of program