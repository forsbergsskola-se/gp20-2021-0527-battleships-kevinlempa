#include "Player.h"
#include <string>
#include "Ship.h"
using namespace std;
using namespace BattleShip;

void Player::PlaceShips() {
	Board anotherBoard;
	anotherBoard.DrawAttackBoard();
	
}

int main() {
	Player player;
	player.PlaceShips();
	
}