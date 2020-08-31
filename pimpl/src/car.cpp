#include "car.h"

Car::Car(std::string brand)
{
	m_brand = brand;
	m_position = 0;
}

void Car::goForward(int distance)
{
	std::cout << m_brand <<" going forwards " << distance << " meters...\n";
	m_position += distance;
}

void Car::goBackward(int distance)
{
	std::cout << m_brand << " going backwards " << distance << " meters...\n";
	m_position += distance;
}

int Car::getPosition()
{
	return m_position;
}