#include "Ship.h"
#include <string>
using namespace BattleShip;
void Ship::GetMark() {
	return mark;
}
void Ship::GetMark() {
	return name;
}
void Ship::GetSize() {
	return size;
}
Ship::Ship(int rsize, char rmark){
	size = rsize;
	mark = rmark;
};