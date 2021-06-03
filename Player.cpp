#include "Player.h"
#include <string>
#include "Ship.h"
#include <iostream>
using namespace std;
using namespace BattleShip;

void Player::PlaceShips() {
	Ship carrier("carrier",5, 'C');
	cout << carrier.GetName() << endl;
	
}
bool Player::ValidInput(char xInput,int yInput) {
	if (yInput < 0 || yInput > 9)
		return false;
	else if (xInput != 'a' && xInput != 'b' && xInput != 'c' && xInput != 'd' && xInput != 'e' && xInput != 'f' && xInput != 'g' && xInput != 'h' && xInput != 'i' && xInput != 'j')
		return false;
	return true;
}

void Player::Input() {
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
	}
	else {
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(),'\n');
		cout << "----Invalid Input try again----" << endl;
		Input();
	}
	
	

}

int main() {
	Player player;
	player.PlaceShips();
	player.Input();
	
}