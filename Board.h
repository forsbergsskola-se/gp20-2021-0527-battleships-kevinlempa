#pragma once
#include "Ship.h"
namespace BattleShip {
	class Board {
	private:
		void Init();
		char playerArray[10][10];
		char attackArray[10][10];
		bool PlaceMarker(bool downwards, bool right, Ship ship, int x, int y);
	public:
		void DrawPlayerBoard(std::string str);
		void DrawAttackBoard();
		bool PlaceShip(int x,int y,Ship ship);



		Board();
	};
}