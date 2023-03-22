#include "mechanic.h"
//function 
bool mechanic::isAvailable(int h, int m) {
	for (int i = 0; i < counter; i++) {
		if ((booking + i)->hours == h && (booking + i)->mins == m)
			return false;
	return true;
	}
}
//getters	
int mechanic::getCounter() {
	return counter;
}

//setters
void mechanic::addapp(int h,int m) {
	(booking + counter)->hours = h;
	(booking + counter)->mins = m;
	counter++;
}

