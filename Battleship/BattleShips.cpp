#include "BattleShips.h"
#include <iostream>
using namespace BattleShip;
bool BattleShips::CheckWin() {
	if (playerOne.playerBoard.Win()) {
		cout << "-->" << playerTwo.name << " Has WON" << endl;
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cin.get();
		return true;
	}
	if (playerTwo.playerBoard.Win()) {
		cout << "-->" << playerOne.name << " Has WON" << endl;
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cin.get();
		return true;
	}
	return false;
}
BattleShips::BattleShips() {
	playerOne.name = "Player 1";
	playerTwo.name = "Player 2";
}
void BattleShips::Start() {
auto p1Ships = playerOne.PlaceShips();
auto p2Ships = playerTwo.PlaceShips();
	do 	{
		playerOne.Attack(playerTwo);
		playerTwo.playerBoard.DestroyedShip(get<0>(p2Ships), get<1>(p2Ships), get<2>(p2Ships), get<3>(p2Ships), get<4>(p2Ships));
		if (CheckWin())return;
		playerTwo.Attack(playerOne);
		playerOne.playerBoard.DestroyedShip(get<0>(p1Ships), get<1>(p1Ships), get<2>(p1Ships), get<3>(p1Ships), get<4>(p1Ships));
		} while (!CheckWin());


}
int main() {
	BattleShips battleShip;
	battleShip.Start();
}