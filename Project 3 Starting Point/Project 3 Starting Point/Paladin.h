#pragma once
#include <string>
#include "Adventurer.h"
class Paladin : public Adventurer
{
private:
	std::string _name;
public:
	Paladin(std::string name);
	~Paladin();


	std::string Attack() { return GetName() + " swings a giant maul at his foes!"; }
};

