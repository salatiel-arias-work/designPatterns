#include<cow.h>

Cow::Cow(std::string cowType) : m_cowType{cowType} {}

std::string Cow::getCowType()
{
	return m_cowType;
}

