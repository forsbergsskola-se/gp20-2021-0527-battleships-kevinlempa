#pragma once
#include "Player.h"
namespace BattleShip {
	class BattleShips {
	private:
		Player playerOne;
		Player playerTwo;
	
	public:
		BattleShips();
		void Start();
	};
}