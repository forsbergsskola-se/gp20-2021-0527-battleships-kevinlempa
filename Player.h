#pragma once
#include "Board.h"
#include <tuple>
namespace BattleShip {
	class Player {
	private:
		char charArray[10]{ 'a','b','c','d','e','f','g','h','i','j' };
		bool ValidInput(char xInput, int yInput);
		void PlaceShip(Ship ship);
	public:
		Board playerBoard;
		void Attack(Player& player);
		std::string name;
		std::tuple<Ship, Ship, Ship, Ship, Ship > PlaceShips();
		std::tuple<int, int> Input();
		Player(std::string initName);
		Player();
	};
}