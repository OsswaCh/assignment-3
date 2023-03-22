#include "customer.h"
#pragma once
class mechanic: public customer
{
private:
	int counter=0;
	customer::Appointment* booking;
public:
	//constructor + destructor
	mechanic(std::string name="", int id = 0, int age = 0) :customer(name, id, age) {
		//we are supposing that an appointment takes one hour and that the mechanic has only 24 appointments possible a dayu
		booking = new Appointment[24];
	}
	~mechanic(){}

	//function 
	bool isAvailable(int, int);

	//getters
	int getCounter();

	//setters
	void addapp(int, int);




};

