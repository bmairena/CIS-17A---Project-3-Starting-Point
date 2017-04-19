#pragma once
#include <string>
#include "Adventurer.h"
class Mage : public Adventurer
{
private:
	std::string _name;
public:
	Mage(std::string name);
	~Mage();

	
	std::string Attack() { return GetName() + " casts magic missle at the darkness!"; }
};

