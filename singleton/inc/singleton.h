#ifndef H_SINGLETON
#define H_SINGLETON

class Singleton
{
public:
	//Makes sure that the Singleton object is non-assignable
	//and non-copyable
	Singleton(Singleton& other) = delete;

	//Returns a pointer to the only Singleton object
	//it is static to be callable without an instance of Singleton
	static Singleton* getInstance();

	//Sets a dummy member variable to test the uniqueness of
	//a Singleton object
	void setDummyValue(int newValue);

	//Returns the value of the dummy memver variable to be able 
	//to print it
	int getDummyValue();

private:
	//Intializes Singleton default constructor to get rid of
	//LNK2019 error, constructor must be private to be a Singleton
	Singleton() = default;
	
	int m_dummyValue;
};





#endif	