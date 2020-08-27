//#include <vector>

#ifndef H_FARM
#define H_FARM

#include <vector>
#include <iostream>
#include "cow.h"

//class Farm is composed of a list of pointers to Cow Instances
//and a member variable that defines its size
class Farm {
private:
	std::vector<Cow*> m_cowsList;
	int m_farmSize;
public:
	//Simple constructor that sets the size of the farm to 0
	Farm();

	//Copy Constructor, takes care of a deep copy.
	//It has been commented out to demonstrate memory corruption
	//Farm(const Farm& other);

	//Destructor to avoid memory leaks, it deletes each Cow instance
	//from the list, and erases all pointers within the list
	~Farm();

	//creates a new Cow instance and adds the returned pointer to it
	//to the list
	void addCow(std::string cowType);

	//sets m_farmsize to the passed argument
	void setFarmSize(int size);

	//Iterates over m_cowsList and prints each Cow instance "cow type"
	void printCowsList();
};

#endif
