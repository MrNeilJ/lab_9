/**************************************************************
 * Author: Neil Johnson
 *
 * Date: 6.3.2017
 *
 * Description: This is the implementation file for the Queue
 * portion of this lab.  In here we have a few functions that
 * bring the Queue simulator to life.  We are able to add numbers
 * to the queue and remove them using a randomly generated number
 * against a value the user inputted earlier.
 **************************************************************/

#include "labQueue.hpp"
#include <iostream>
#include "inputCheck.hpp"
#include <time.h>
#include <iomanip>


/**************************************************************
 * 						labQueue()
 * 	Description: This is the main function that implements the
 * 	lab queue simulator.  In here it will ask the user to input
 * 	values that will equate to % chance of being added, removed,
 * 	and also number of rounds.
 **************************************************************/
void labQueue() {
	// Seed time so it will keep changing
	srand(time(NULL));

	int rounds;
	int inQueue;
	int outQueue;

	std::cout << "Queue Creator:" << std::endl;
	std::cout << "-----------------------------" << std::endl;

	std::cout << "How many rounds would you like to run? ";
	rounds = getInt();
	std::cout << std::endl;

	std::cout << "What would you like the percentage to be that the number will be in the queue? ";
	inQueue = getInt();
	std::cout << std::endl;

	std::cout << "What would you like the percentage to be that a number is removed from the queue? ";
	outQueue = getInt();
	std::cout << std::endl;

	std::queue<int>labQueue;

	queueLoad(labQueue, rounds, inQueue, outQueue);

}

/**************************************************************
 * 						randNumGen()
 * 	Description: This will generate a random number between 1
 * 	and the value that is inputted as its parameter.
 **************************************************************/
int randNumGen(int value) {
	return (rand() % value) + 1;
}

/**************************************************************
 * 						randNumGen()
 * 	Description: This is the main brains of the functionality.
 * 	It will loop through the inputted values provided earlier
 * 	by the user and randomly generate another value, and decide
 * 	if it should be added and if another value should be removed
 * 	from the queue.
 **************************************************************/
void queueLoad(std::queue<int> userQueue, int userRounds, int userInclude, int userExclude) {
	int roundRandNum;			// Stores the random number being used for this round
	int addPercent;				// Stores the random percent chance of being in this round
	int removePercent;			// Stores the random percent chance of being removed in this round
	int length;					// Stores the length of the queue of that current round;
	double averageLength = 0;	// Stores the average amongst all rounds.

	for (int i = 1; i <= userRounds; i++) {
		roundRandNum 	= randNumGen(MAXVALUE);
		addPercent		= randNumGen(100);
		removePercent	= randNumGen(100);

		// Print round number
		std::cout << "ROUND " << i << ":" << std::endl;
		std::cout << "-----------------------------" << std::endl;

		// If the random number value less than the userInclude % then add
		if (addPercent < userInclude) {
			userQueue.push(roundRandNum);
			std::cout << "Added "  << roundRandNum << " to the queue." << std::endl;
		}
		// If the random value is less than the userExclude % then remove first value
		if (removePercent < userExclude) {
			if (!userQueue.empty()) {
				std::cout << "Removed " << userQueue.front() << " from the queue." << std::endl;
				userQueue.pop();
			}
		}
		// Store the length of the array from this current round
		length = userQueue.size();
		std::cout << "Round Length:   " << length << std::endl;

		// Average out the queue
		averageLength = ((averageLength * (i - 1)) + length) / i;
		std::cout << std::setprecision(3) << "Average Length: " << averageLength << "\n" << std::endl;


	}

	std::cout << "END QUEUE:" << std::endl;
	std::cout << "-----------------------------" << std::endl;
	std::cout << "Queue length: " << userQueue.size() << std::endl;
	int size = userQueue.size();
	std::cout << "Front-> ";
	for (int j = 0; j < size; j++) {
		std::cout << "[" << userQueue.front() << "] ";
		userQueue.pop();
	}
	std::cout << "<-Back" << std::endl;

}