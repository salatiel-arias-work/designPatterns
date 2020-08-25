#ifndef H_CARPROXY
#define H_CARPROXY	

#include "car.h"
#include <string>
#include <iostream>

//class to deal with the "complicated" use of 
//Car class, user (or client) may use this class
//to easily tell the car to move to some position
//instead of "driving" to that position
class CarProxy {
private:
	//pointer to the "real" Car instance
	Car* m_realCar;
	//string to initialize a Car instance
	std::string m_brand;
public:
	//constructor to set Car brand to a default name
	//and set m_realCar to point to "nothing" yet
	CarProxy();

	//sets m_brand to the passed argument
	void setBrand(std::string brand);

	//creates a Car instance upon first call (lazy loading)
	//and keeps track of its old position in order to
	//move it to the requested new position, so the user doesn't
	//have to deal with the logic behind "driving" the car
	void goToPosition(int newPosition);

	//gets the current position of a Car instance and prints it
	//on the terminal
	void printPosition();
};

#endif 

