#include "carProxy_Pimpl.h"
#include "car.h"

/********************************************IMPLEMENTATION********************************************/
//Definition of CarProxyImpl within namespace of CarProxy is 
//necessary to avoid incomplete type errors when creating
//an instance of it
class CarProxy::CarProxyImpl {
public:
	CarProxyImpl()
	{
		m_brand = "defaultBrand";
		m_realCar = nullptr;
	}

	~CarProxyImpl() {
		delete m_realCar;
	}

	void setBrand(std::string brand)
	{
		m_brand = brand;
	}

	void goToPosition(int newPosition)
	{
		if (m_realCar == nullptr)
		{
			m_realCar = new Car(m_brand);
		}

		int delta_position = newPosition - m_realCar->getPosition();

		if (delta_position > 0)
		{
			m_realCar->goForward(delta_position);
		}
		else {
			m_realCar->goBackward(delta_position);
		}
	}

	void printPosition()
	{
		std::cout << m_brand << " new position: " << m_realCar->getPosition() << " meters from origin.\n";
	}

private:
	Car* m_realCar;
	std::string m_brand;
};

/********************************************INTERFACE TO IMPLEMENTATION********************************************/
CarProxy::CarProxy() : m_ptrToRealProxy(new CarProxy::CarProxyImpl){}

CarProxy::~CarProxy()
{
	delete m_ptrToRealProxy;
}

void CarProxy::setBrand(std::string brand) 
{
	m_ptrToRealProxy->setBrand(brand);
}

void CarProxy::goToPosition(int newPosition) 
{
	m_ptrToRealProxy->goToPosition(newPosition);
}

void CarProxy::printPosition() 
{
	m_ptrToRealProxy->printPosition();
}


