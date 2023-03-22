#include "customer.h"
#include"person.h"

//operator overloading
bool customer:: operator>(const customer& someone) {
	if (appointment.hours > someone.appointment.hours) {
		std::cout << appointment.hours;
		return true;
	}

	else if (appointment.hours == someone.appointment.hours && appointment.mins > someone.appointment.mins)
		return true;
	else
		return false;

}
bool customer::operator<(const customer& someone) {
	if (appointment.hours < someone.appointment.hours)
		return true;
	else if (appointment.hours == someone.appointment.hours && appointment.mins < someone.appointment.mins)
		return true;
	else
		return false;
}

bool customer::operator== (const customer& someone) {
	return appointment.hours == someone.appointment.hours && appointment.mins == someone.appointment.mins;
}

//getters
int customer::getMecID() {
	return MechanicID;
}
void customer::getapp() {
	std::cout << "your appointment is at "<<appointment.hours << ":" << appointment.mins << std::endl;
}

std::string customer::getName() {
	return person::getName();
}
int customer::getID() {
	return person::getID();
}
int customer::getAge() {
	return person::getAge();
}

void customer::printinfo() {
	std::cout << "name: " << getName() << ", age: " << getAge() << ", ID: " << getID() << std::endl;
}

//setters
void customer::setApp(int h, int m) {
	appointment.hours = h;
	appointment.mins = m;
}
