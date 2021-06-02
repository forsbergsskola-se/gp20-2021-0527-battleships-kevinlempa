#pragma once
#include <string>
namespace BattleShip {
	class Ship {
	private:

		int size;
		char mark;
	public:
		int GetSize();
		char GetMark();
		Ship(int rsize, char rmark);
	};
}