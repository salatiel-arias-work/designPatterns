#include <iostream>
#include "carProxy.h"

int main()
{
	CarProxy myCar;
	myCar.setBrand("toyota");

	myCar.goToPosition(50);
	myCar.printPosition();
	myCar.goToPosition(-25);
	myCar.printPosition();


	return 0;
}