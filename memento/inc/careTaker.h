#ifndef H_CARETAKER
#define H_CARETAKER
#include <vector>
#include "memento.h"

//A CareTaker instance acts as a kind states history
//by managing a list of "Mementos" 
class CareTaker {
public:
	//Nothing fancy just a default constructor
	CareTaker() = default;

	//Pops the top element of a "stack" of pointers to 
	//Memento instances and returns a pointer to the new 
	//top element of the stack
	Memento* getLastState();

	//Takes a pointer to a Memento instance and pushes it
	//onto the "stack" of pointers to Memento instances
	void saveCurrentState(Memento* snapshot);

private:
	//List of pointers to Memento instances, managed as 
	//a "stack", i.e. FIFO (First In, First Out)
	std::vector<Memento*> m_snapshots;

};

#endif