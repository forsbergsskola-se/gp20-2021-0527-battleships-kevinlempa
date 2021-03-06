#pragma once
#include <string>
namespace BattleShip {
	class Ship {
	private:
		std::string name;
		int size;
		char mark;
	public:
		bool isDestroyed = false;
		std::string GetName();
		int GetSize();
		char GetMark();
		Ship(std::string rname,int rsize, char rmark);
	};
}