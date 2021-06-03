#pragma once
#include "Board.h"
namespace BattleShip {
	class Player {
	private:
		char charArray[10]{'a','b','c','d','e','f','g','h','i','j'};
		bool ValidInput(char xInput, int yInput);
		Board board;
	public:
		void PlaceShips();
		void Input();
	};
}