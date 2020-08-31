#include "farm.h"

Farm::Farm() : m_farmSize{0}{}

Farm::Farm(const Farm& other) : m_farmSize{other.m_farmSize}
{
	for (int i = 0; i < other.m_cowsList.size(); i++)
	{
		m_cowsList.push_back(new Cow("noType"));
		*m_cowsList[i] = *other.m_cowsList[i];
	}

}


Farm::~Farm()
{
	for (int i = 0; i < m_cowsList.size(); i++)
	{
		delete m_cowsList[i];
	}
	m_cowsList.clear();
}

void Farm::addCow(std::string cowType)
{
	m_cowsList.push_back(new Cow(cowType));
}

void Farm::setFarmSize(int size)
{
	m_farmSize = size;
}

void Farm::printCowsList()
{
	for (int i = 0; i < m_cowsList.size(); i++)
	{
		std::string currentCowType= m_cowsList[i]->getCowType();
		std::cout << "Cow " << i << ": " << currentCowType << std::endl;
	}
}
