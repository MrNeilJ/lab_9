/**************************************************************
 * Author: Neil Johnson
 *
 * Date: 6.3.2017
 *
 * Description: This is the main file for this labs implementation.
 * In here I am hosting the main menu option that allows me to
 * easily access the necessary functions to run each option
 * presented in the menus below.
 **************************************************************/

#include <iostream>
#include "labQueue.hpp"
#include "menuMaker.hpp"
#include "palindrome.hpp"


int main() {
	std::cout << "LAB 9 QUEUE / PALINDROME SIMULATOR" << std::endl;
	std::cout << "---------------------------------------------" << std::endl;

	menuMaker welcomeMenu(	"Which design would you like to try first?",
							"Queue Creator",
							"Palindrome Simulator",
							"Quit");
	int welcomeResponse;
	do {
		welcomeMenu.prompt();
		welcomeResponse = welcomeMenu.getResponse();

		if (welcomeResponse == 1) {
			labQueue();
		}
		else if (welcomeResponse == 2) {
			palindrome();

		}
		else if (welcomeResponse == 3) {
			std::cout << "Sounds good, have a great rest of your day!" << std::endl;
		}
		else {
			std::cout << "Did not recognize input, please try again" << std::endl;
		}
	} while (welcomeResponse != 3);

	return 0;
}

