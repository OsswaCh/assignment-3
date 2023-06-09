#include <iostream>
#pragma once
#include "person.h"
class customer: public person
{
private:
	int MechanicID;
	person::Appointment appointment;

public:
	//constructor
	customer(std::string name="", int id=0, int age=0) : person(name, id, age) {}

	//destructor
	~customer(){}

	//overloading operators
	bool operator>(const customer& );

	bool operator<(const customer& );

	bool operator==(const customer& );

	//getters
	void printinfo();

	std::string getName();
	int getID();
	int getAge();
	int getMecID();
	void getapp();
	


	//setters
	void setApp(int , int );
	
};

