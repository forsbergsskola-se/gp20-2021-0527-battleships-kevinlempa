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
		void DestroyedShip(Ship& s1, Ship& s2, Ship& s3, Ship& s4, Ship& s5);
		void CheckShip(Ship& ship);
		bool Win();
		bool Attack(int x, int y);
		void SetAttackMarker(int x, int y, bool b);
		void DrawPlayerBoard(std::string str);
		void DrawAttackBoard(std::string str);
		bool PlaceShip(int x, int y, Ship ship);
		Board();
	};
}