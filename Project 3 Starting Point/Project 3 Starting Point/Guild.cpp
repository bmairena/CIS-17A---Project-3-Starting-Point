#include "Guild.h"

Guild::Guild(std::string name) : _name(name)
{
}

Guild::~Guild()
{
}

void Guild::addAdventurer(std::shared_ptr<Adventurer> adventurer)
{
	_adventurers.push_back(adventurer);
}

std::string Guild::GetInfo()
{
	std::string output = "Your guild has: \n";	

	output += _adventurers.size()> 0 ? std::to_string(_adventurers.size()) + " adventurers\n" : "No adventurers!\n";
	//output += _rangers.size()	> 0 ? std::to_string(_rangers.size()) + " rangers\n" : "No rangers!\n";
	//output += _warriors.size()	> 0 ? std::to_string(_warriors.size()) + " warriors\n" : "No warriors!\n";
	//output += _paladins.size()	> 0 ? std::to_string(_paladins.size()) + " paladins\n" : "No paladins!\n";
	return output;
}
//
//std::string Guild::AttackWithMages()
//{
//	
//}
//
std::string Guild::AttackWithPaladins()
{
	std::string output = "You command your paladins to attack! \n";
	if (_adventurers.size() > 0) {
		for (auto paladin : _adventurers) {
			output += paladin->Attack() + "\n";
		}
	}
	return output;
}

//std::string Guild::AttackWithRangers()
//{
//	std::string output = "You command your rangers to attack! \n";
//	if (_rangers.size() > 0) {
//		for (auto ranger : _rangers) {
//			output += ranger->Attack() + "\n";
//		}
//	}
//	return output;
//}
//
//std::string Guild::AttackWithWarriors()
//{
//	std::string output = "You command your warriors to attack! \n";
//	if (_warriors.size() > 0) {
//		for (auto warrior : _warriors) {
//			output += warrior->Attack() + "\n";
//		}
//	}
//	return output;
//}

std::string Guild::AttackWithAllAdventurers()
{
	std::string output = "You command everyone to attack! \n";
	if (_adventurers.size() > 0) {
		for (auto adventurer : _adventurers) {
			output += adventurer->Attack() + "\n";
		}
	}
	return output;
}
