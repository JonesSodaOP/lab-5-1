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
int num2; // num2 is a cin value now
cout << "Please enter an integer" << endl;
cin >> num1;
  cout << "Please enter another integer" << endl;
  cin >> num2;
cout << "num1 = " << num1 << " and num2 = " << num2 << endl;
if (num1 == num2) { //Curly brackets needed to not throw a syntax error
  cout << "The values are the same." << endl;
  cout << "Hey, that’s a coincidence!" << endl;
} else   
  cout << "The values are not the same" << endl;
return 0;
}
// End of program 