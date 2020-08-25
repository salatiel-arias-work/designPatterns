#include "carProxy.h"


CarProxy::CarProxy()
{
	m_brand = "defaultBrand";
	m_realCar = nullptr;
}

void CarProxy::setBrand(std::string brand)
{
	m_brand = brand;
}

void CarProxy::goToPosition(int newPosition)
{
	if (m_realCar == nullptr)
	{
		m_realCar = new Car(m_brand);
	}

	int delta_position = newPosition - m_realCar->getPosition();

	if (delta_position > 0)	{
		m_realCar->goForward(delta_position);
	} else {
		m_realCar->goBackward(delta_position);
	}
}

void CarProxy::printPosition()
{
	std::cout << m_brand << " new position: " << m_realCar->getPosition() << " meters from origin.\n";
}