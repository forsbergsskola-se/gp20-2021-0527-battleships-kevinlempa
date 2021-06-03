#include "Player.h"
#include <string>
#include "Ship.h"
#include <iostream>
using namespace std;
using namespace BattleShip;

Player::Player(string initName) {
	name = initName;
}
Player::Player() {
	name = "";
}
void Player::PlaceShip(Ship ship) {
	playerBoard.DrawPlayerBoard(name);
	cout << "Where would you like to Place your " << ship.GetName() << "?\nThe " << ship.GetName() << " takes up " << ship.GetSize() << " slots" << endl;
	auto xy = Input();
	if (!playerBoard.PlaceShip(get<0>(xy), get<1>(xy), ship)) {
		cout << "Cannot place " << ship.GetName() << " here.";
		PlaceShip(ship);
	}
}
void Player::PlaceShips() {
	Ship carrier("Carrier", 5, 'C');
	Ship battleShip("Battleship", 4, 'B');
	Ship destroyer("Destroyer", 3, 'D');
	Ship patrolBoatA("Patrol Boat", 2, 'P');
	Ship patrolBoatB("Patrol Boat", 2, 'P');
	PlaceShip(carrier);
	PlaceShip(battleShip);
	PlaceShip(destroyer);
	PlaceShip(patrolBoatA);
	PlaceShip(patrolBoatB);
	playerBoard.DrawPlayerBoard(name);
}
bool Player::ValidInput(char xInput, int yInput) {
	if (yInput < 0 || yInput > 9)
		return false;
	else if (xInput != 'a' && xInput != 'b' && xInput != 'c' && xInput != 'd' && xInput != 'e' && xInput != 'f' && xInput != 'g' && xInput != 'h' && xInput != 'i' && xInput != 'j')
		return false;
	return true;
}

tuple<int, int> Player::Input() {
	cout << "Enter Coordinates A0 - J9 :  " << endl;
	string input;
	cin >> input;
	char xInput = tolower(input[0]);
	int yInput = input[1] - '0';
	int xInt;
	if (ValidInput(xInput, yInput)) {
		for (int i = 0; i < 10; i++) {
			if (charArray[i] == xInput)
				xInt = i;
		}
		return make_tuple(xInt, yInput);
	}
	else {
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << "----Invalid Input try again----" << endl;
		return Input();
	}
}
