#pragma once
#include "Player.h"
#include <string>
using namespace std;
namespace BattleShip {
	class BattleShips {
	private:
		Player playerOne;
		Player playerTwo;
		bool CheckWin();
		void Init();
	public:
		BattleShips();
		void Start();
	};
}