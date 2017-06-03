#include <iostream>
#include "labQueue.hpp"
#include "menuMaker.hpp"


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

