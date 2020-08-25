#include <iostream>
#include "car.h"

Car::Car() : m_position{ 0,0 } {}

void Car::advance(int x, int y) {
	std::cout << "advancing..." << std::endl;
	m_position.x_coordinate += x;
	m_position.y_coordinate += y;
	std::cout << "current position: (" << m_position.x_coordinate << ", " << m_position.y_coordinate << ")" << std::endl;
}

Memento *Car::takeSnapshot() {
	return new Memento(m_position);
}

void Car::restoreLastPosition(Memento* lastSnapshot) {
	std::cout << "undoing..." << std::endl;
	m_position = lastSnapshot->getState();
	std::cout << "current position: (" << m_position.x_coordinate << ", " << m_position.y_coordinate << ")" << std::endl;
}
