#include <iostream>
#include "carProxy_Pimpl.h"

int main()
{
	//To understand the concrete implcations of PIMPL, see the output window. 
	//On first compilation the following files are compiled:
	//		>car.cpp
	//		>carProxy_Pimple.cpp
	//		>main.cpp
	//...make a change to class Car (like adding a member variable), now the
	//output looks like this:
	//		>car.cpp
	//		>carProxy_Pimpl.cpp
	//PIMPL effectively created a "firewall" between dependencies, making our
	//client (main) independent(at least directly) of car.h
	CarProxy myCar;
	myCar.setBrand("toyota");

	myCar.goToPosition(50);
	myCar.printPosition();
	myCar.goToPosition(-25);
	myCar.printPosition();


	return 0;
}