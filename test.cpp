/*
	Heeseung Hwang
	Jan 17 2019
	Skiils-evaluation
	link: gitlab.com/byuhbll/skills-evaluation
*/

//#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

//solution 1
string reverseString(string str) {
	string reversedString;
	for (int i = str.length()-1; i >= 0; i--) {
		reversedString.push_back(str[i]);
		//cout << str[i] << endl;
	}
	return reversedString;
}

//solution 2
int findLargestInt(int a, int b, int c) {
	/*
	//solution a
	if (a > b) {
		if (a > c) {
			return a;
		}
		else {
			return c;
		}
	}
	else {
		if (b > c) {
			return b;
		}
		else {
			return c;
		}
	}
	*/

	//solution b
	int largestInt;
	int integerArray[] = {a, b, c};

	for (int i = 0; i < 3; i++) {
		largestInt = integerArray[0];
		if (largestInt < integerArray[i]) {
			largestInt = integerArray[i];
		}
	}

	return largestInt;
}

//solution 3
int factorial(int number) {
	if (number == 1) {
		return number;
	}
	return number * factorial(number - 1);
}

//solution 4
int fibonacci(int sequence) {
	if (sequence == 1 || sequence == 2) {
		return 1;
	}
	else {
		return fibonacci(sequence - 1) + fibonacci(sequence - 2);
	}


}

int main()
{
	//problem 1
	/*Write a function that will reverse the given input string*/
	string reversedString; //result
	
	/*for the random input test*/
	//string inputString;
	//getline(cin, inputString);	
	//cout << inputString << endl;
	//reversedString = reverseString(inputString);

	reversedString = reverseString("string");

	cout << reversedString << endl;

	//problem 2
	/*Write a function that accepts three integers as input and returns as output the largest of the three*/
	int largestInt; //result

	largestInt = findLargestInt(1, 2, 3);

	cout << largestInt << endl;

	//problem 3
	/*Write a function that calculates the factorial of an input integer using recursion*/
	int factorialResult; //result

	factorialResult = factorial(5);

	cout << factorialResult << endl;

	//problem 4
	/*Write a function that calculates the Nth entry of the fibonacci sequence (Do not include 0 in the sequence)*/
	int fibonacciResult; //result

	fibonacciResult = fibonacci(6);

	cout << fibonacciResult << endl;

	return 0;
}