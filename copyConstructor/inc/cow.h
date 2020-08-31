#ifndef H_COW
#define H_COW

#include <string>

//A simple class to create a Cow instance defined by
//its "cow type". 
//There is no custom destructor, because class Farm takes
//care of deleting each Cow instance upon destruction
class Cow {
public:
	//constructor to set the type of cow to be created
	Cow(std::string cowType);

	//m_cowType getter
	std::string getCowType();

private:
	//member variable that holds the "cow type" of a Cow instance
	//example: m_cowType = "milk_cow"
	std::string m_cowType;
};

#endif