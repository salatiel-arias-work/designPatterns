#include <iostream>
#include "singleton.h"

int main()
{
	Singleton* singleton1 = Singleton::getInstance();
	Singleton* singleton2 = Singleton::getInstance();

	//Singleton hackSingleton1(*singleton1);
	//Singleton hackSingleton2 = *singleton1;

	singleton1->setDummyValue(10);

	std::cout << "singleton1 dummyValue: " << singleton1->getDummyValue() << std::endl;
	std::cout << "singleton2 dummyValue: " << singleton2->getDummyValue() << std::endl;
	//std::cout << "hackSingleton dummyValue: " << hackSingleton2.getDummyValue() << std::endl;

	return 0;
}
