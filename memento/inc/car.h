#ifndef H_CAR
#define H_CAR

#include "memento.h"

//A class to demonstrate the use of the Memento pattern
//the state of a Car instance is defined by its position
class Car
{
public:
	//sets the initial position to {0,0}
	Car();

	//changes the position according to the passed arguments
	void advance(int x, int y);

	//returns a pointer to a newly created Memento instance,
	//which holds the "state" of a Car instance at that point in time
	Memento* takeSnapshot();

	//takes a reference to a Memento instance and sets 
	//the state of Car instance to that of the Memento instance
	void restoreLastPosition(Memento* lastSnapshot);

private:
	//m_position defines the state of a Car instance
	Position m_position;

};



#endif 

