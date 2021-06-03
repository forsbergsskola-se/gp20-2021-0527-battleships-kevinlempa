#include "Ship.h"
#include <string>
using namespace BattleShip;

char Ship::GetMark() {
	return mark;
}

int Ship::GetSize() {
	return size;
}
std::string Ship::GetName() {
	return name;
}
Ship::Ship(std::string rname,int rsize, char rmark){
	size = rsize;
	mark = rmark;
	name = rname;
};