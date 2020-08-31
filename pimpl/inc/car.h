#ifndef H_CAR
#define H_CAR

#include <string>
#include <iostream>

//Class to demonstrate the use of the Proxy pattern.
//Car class is not complex, but its use to porperly
//keep track of the position of a Car instance
//might get complicated for the user
class Car{
private:
	//brand of a Car instance
	std::string m_brand;

	//position of a Car instance on a single axis 
	//-> forwards & backwards
	int m_position;

public:
	//constructor to set car brand and position to 0  
	Car(std::string brand);

	//adds the passed distance to m_position
	//distance must be positive
	void goForward(int distance);

	//adds the passed distance to m_position
	//distance must be negative
	void goBackward(int distance);

	//returns value of m_position
	int getPosition();
};

#endif