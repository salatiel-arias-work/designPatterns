#ifndef H_CARPROXY
#define H_CARPROXY	

#include <string>
#include <iostream>
//#include "Car.h" <-- since CarProxy does not implement logic, it does not 
//need class Car, therefore a client of CarProxy (main in our case) will not 
//indirectly include "Car.h" header.
//This means, client code does not have to be compiled again if any change
//is made to Car.h

//A description for this class is offered in visual studio project "proxyMain" 
//Raw pointers are used for the sake of simplicity...
class CarProxy {


public:
	CarProxy();

	//A desctructor has been added to avoid leaks
	~CarProxy();

	//All methods forward their calls to the methods of 
	//the same name of class CarProxyImpl 
	void setBrand(std::string brand);

	void goToPosition(int newPosition);

	void printPosition();

	
private:
	//Declaration of CarProxyImpl without definition, needed to
	//declare m_ptrToRealProxy
	class CarProxyImpl;
	//pointer to an instance of CarProxy implementation class
	CarProxyImpl* m_ptrToRealProxy;
};

#endif 

