/**************************************************************
 * Author: Neil Johnson
 *
 * Date: 6.3.2017
 *
 * Description: This is the header file for the Queue
 * portion of this lab.  In here we have a few functions that
 * bring the Queue simulator to life.  We are able to add numbers
 * to the queue and remove them using a randomly generated number
 * against a value the user inputted earlier.
 **************************************************************/

#include <Queue>

#ifndef LAB_9_LABQUEUE_HPP
#define LAB_9_LABQUEUE_HPP


const int MAXVALUE = 1000;

void labQueue();
int randNumGen(int);
void queueLoad(std::queue<int>, int, int, int);



#endif //LAB_9_LABQUEUE_HPP
