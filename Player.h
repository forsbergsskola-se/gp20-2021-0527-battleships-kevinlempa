#pragma once
#include "Board.h"
namespace BattleShip {
	class Player {
	private:
		Board board;
	public:
		void PlaceShips();
	};
}