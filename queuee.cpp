#include <iostream>
#include "queuee.h"

queuee::queuee(int size = 10) {
	values = new double[size];
	maxSize = size;
	front = 0;
	rear = -1;
	counter = 0;
}

bool queuee:: isEmpty() {
	if (counter) return false;
	else
		return true;
}
bool queuee::isFull() {
	if (counter==maxSize) return true;
	else
		return false;
}

bool queuee:: Enqueue(double x) {
	if (isFull()) {
		std::cout << "Error";
		return false;
	}
	else {
		rear = (rear + 1) % maxSize;
		*(values + rear) = x;
		counter++;
		return true;

	}
}

bool queuee::Dequeue(double& x) {
	if (isEmpty()) {
		std::cout << "empty queue";
		return false;
	}
	else {
		x = *(values + front);
		front = (front + 1) % maxSize;
		counter--;
		return true;
	}
}


	