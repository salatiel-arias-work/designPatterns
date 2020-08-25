#include "singleton.h"

void Singleton::setDummyValue(int newValue)
{
	m_dummyValue = newValue;
}

int Singleton::getDummyValue()
{
	return m_dummyValue;
}


Singleton* Singleton::getInstance()
{
	//singleInstance is created only ONCE,
	//that is on first call of getInstance()
	static Singleton singleInstance;

	return &singleInstance;
}

