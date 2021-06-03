#include "BattleShip.h"
using namespace BattleShip;
BattleShips::BattleShips() {
	playerOne.name = "Player 1";
	playerTwo.name = "Player 2";
}
void BattleShips::Start() {
	playerOne.PlaceShips();
	playerTwo.PlaceShips();

}

int main() {
	BattleShips battleShip;
	battleShip.Start();
}