#pragma once
#include "Board.h"
#include <tuple>
namespace BattleShip {
	class Player {
	private:
		char charArray[10]{'a','b','c','d','e','f','g','h','i','j'};
		bool ValidInput(char xInput, int yInput);
		Board playerBoard;
		void PlaceShip(Ship ship);
	public:
		std::string name;
		void PlaceShips();
		std::tuple<int, int> Input();
		Player(std::string initName);
		Player();
	};
}