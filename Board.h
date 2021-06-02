#pragma once
namespace BattleShip {
	class Board {
	private:
		char playerArray[10][10];
		char attackArray[10][10];
	public:
		void DrawPlayerBoard();
		void Init();
		void DrawAttackBoard();
	};
}