#include <iostream>
#include "farm.h"
#define SOME_RANDOME_SIZE 100

int main()
{
	//Creation of a Farm instance
	Farm myFarm;

	//Setting of farm size and adding of 3 new Cow instances
	myFarm.setFarmSize(SOME_RANDOME_SIZE);
	myFarm.addCow("milk_cow");
	myFarm.addCow("beef_cow");
	myFarm.addCow("bull");

	//brackets are used to indicate a new scope, 
	//the Farm instance myFarmCopy is destroyed upon
	//end of scope
	{
		Farm myFarmCopy(myFarm);
		std::cout << "List of cows from copied farm: \n";
		myFarmCopy.printCowsList();
	}

	//If the copy constructor is not implemented, the destructor 
	//of myFarmCopy deletes the same Cow instances that the pointers
	//in myFarm.m_cowsList are pointing to... Creating memory corruption
	std::cout << "List of cows from original farm: \n";
	myFarm.printCowsList();



	return 0;
}