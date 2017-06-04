//
// Created by Neil on 6/3/2017.
//

#include <iostream>
#include <stack>
#include "palindrome.hpp"

void palindrome() {
	std::cout << "Type in the string that you would like to make into a palindrome";
	std::string userInput = getString();
	int size = userInput.size();
	std::string original = userInput;

	std::stack<char>modifiedStr;

	// Add each letter of the string back into the
	for (int i = 0; i < size; i++) {
		char charInput = userInput.at(i);
		modifiedStr.push(charInput);
	}

	for (int i = 0; i < size; i++) {
		userInput += modifiedStr.top();
		modifiedStr.pop();
	}

	std::cout << "RESULTS:" << std::endl;
	std::cout << "-----------------------------" << std::endl;
	std::cout << "Original:   " << original << std::endl;
	std::cout << "Palindrome: " << userInput << std::endl;





}
