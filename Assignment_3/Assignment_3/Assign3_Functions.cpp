#include <iostream>
#include <string>
#include "Assign3_Functions.h"

using namespace std;

//Assignment 3 : Question 1 queue function 



// Assignment 3 : Question 2 recursive function to determine if its argument string is a palindrome
bool isPalindrome(const string &user_string, int start, int end) {
	if (user_string.length() == 1) {
		return true;
	}

	else if (user_string[start] != user_string[end - 1]) {
		return false;
	}

	else if (start < end + 1) {
		return isPalindrome(user_string, start + 1, end - 1);
	}

	return true;
}

//Menu code for functionality
char menu_options() {
	char userchoice = ' ';

	cout << "Functionality for Question 2" << endl;
	cout << "(P) Palindrome - Check if a string is a palindrome";
	cout << endl;
	cout << endl;

	cout << "(Q) Exit" << endl;
	cout << endl;

	cout << "Please select the function you'd like to run: " << endl;
	cin >> userchoice;

	return userchoice;
}
