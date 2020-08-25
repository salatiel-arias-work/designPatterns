#include <iostream>
#include "careTaker.h"
#include "car.h"

int main()
{
	Car myCar;
	CareTaker carCT;

	myCar.advance(10, 15);
	carCT.saveCurrentState(myCar.takeSnapshot());
	myCar.advance(10, 15);
	carCT.saveCurrentState(myCar.takeSnapshot());
	myCar.advance(10, 15);
	carCT.saveCurrentState(myCar.takeSnapshot());
	myCar.advance(10, 15);
	carCT.saveCurrentState(myCar.takeSnapshot());
	myCar.restoreLastPosition(carCT.getLastState());
	myCar.restoreLastPosition(carCT.getLastState());
	myCar.restoreLastPosition(carCT.getLastState());

	return 0;
}
