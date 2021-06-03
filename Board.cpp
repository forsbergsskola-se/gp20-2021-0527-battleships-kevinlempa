#include <iostream>
#include "Board.h"
using namespace std;
using namespace BattleShip;

bool Board::PlaceShip(int x, int y, Ship ship) {
	bool downwards = true;
	bool right = true;

	if (playerArray[x][y] == ' ') {
		for (int i = 0; i < ship.GetSize(); i++) {
			if (playerArray[x + i][y] != ' ' || x + i > 9 || x + i < 0) {
				downwards = false;
			}
			if (playerArray[x][y + 1] != ' ' || y + i > 9 || y + i < 0) {
				right = false;
			}
		}
		return PlaceMarker(downwards, right, ship, x, y);
	}
	else return false;
}
bool Board::PlaceMarker(bool downwards, bool right, Ship ship, int x, int y) {
	if (downwards && right) {
		cout << "Horizontal or Vertical enter : h/v" << endl;
		char hz;
		cin >> hz;
		hz = tolower(hz);
		if (hz == 'v') {
			for (int i = 0; i < ship.GetSize(); i++) {
				playerArray[x + i][y] = ship.GetMark();
			}
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			return true;
		}
		else if (hz == 'h') {
			for (int i = 0; i < ship.GetSize(); i++) {
				playerArray[x][y + i] = ship.GetMark();
			}
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			return true;
		}
	}
	else if (downwards) {
		for (int i = 0; i < ship.GetSize(); i++) {
			playerArray[x + i][y] = ship.GetMark();
		}
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		return true;
	}
	else if (right) {
		for (int i = 0; i < ship.GetSize(); i++) {
			playerArray[x][y + 1] = ship.GetMark();
		}
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		return true;
	}
	else {
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << "----Invalid Input try again----" << endl;
		return PlaceMarker(downwards, right, ship, x, y);
	}
	return false;
}
void Board::DrawAttackBoard() {
	cout << "\n\n\t\t\t\t  BattleShip\n\n";
	cout << "	  |  0  |  1  |  2  |  3  |  4  |  5  |  6  |  7  |  8  |  9  |" << endl;
	cout << "	  -------------------------------------------------------------" << endl;
	cout << "	A |  " << attackArray[0][0] << "  |  " << attackArray[0][1] << "  |  " << attackArray[0][2] << "  |  " << attackArray[0][3] << "  |  " << attackArray[0][4] << "  |  " << attackArray[0][5] << "  |  " << attackArray[0][6] << "  |  " << attackArray[0][7] << "  |  " << attackArray[0][8] << "  |  " << attackArray[0][9] << "  |  " << endl;
	cout << "	  -------------------------------------------------------------" << endl;
	cout << "	B |  " << attackArray[1][0] << "  |  " << attackArray[1][1] << "  |  " << attackArray[1][2] << "  |  " << attackArray[1][3] << "  |  " << attackArray[1][4] << "  |  " << attackArray[1][5] << "  |  " << attackArray[1][6] << "  |  " << attackArray[1][7] << "  |  " << attackArray[1][8] << "  |  " << attackArray[1][9] << "  |  " << endl;
	cout << "	  -------------------------------------------------------------" << endl;
	cout << "	C |  " << attackArray[2][0] << "  |  " << attackArray[2][1] << "  |  " << attackArray[2][2] << "  |  " << attackArray[2][3] << "  |  " << attackArray[2][4] << "  |  " << attackArray[2][5] << "  |  " << attackArray[2][6] << "  |  " << attackArray[2][7] << "  |  " << attackArray[2][8] << "  |  " << attackArray[2][9] << "  |  " << endl;
	cout << "	  -------------------------------------------------------------" << endl;
	cout << "	D |  " << attackArray[3][0] << "  |  " << attackArray[3][1] << "  |  " << attackArray[3][2] << "  |  " << attackArray[3][3] << "  |  " << attackArray[3][4] << "  |  " << attackArray[3][5] << "  |  " << attackArray[3][6] << "  |  " << attackArray[3][7] << "  |  " << attackArray[3][8] << "  |  " << attackArray[3][9] << "  |  " << endl;
	cout << "	  -------------------------------------------------------------" << endl;
	cout << "	E |  " << attackArray[4][0] << "  |  " << attackArray[4][1] << "  |  " << attackArray[4][2] << "  |  " << attackArray[4][3] << "  |  " << attackArray[4][4] << "  |  " << attackArray[4][5] << "  |  " << attackArray[4][6] << "  |  " << attackArray[4][7] << "  |  " << attackArray[4][8] << "  |  " << attackArray[4][9] << "  |  " << endl;
	cout << "	  -------------------------------------------------------------" << endl;
	cout << "	F |  " << attackArray[5][0] << "  |  " << attackArray[5][1] << "  |  " << attackArray[5][2] << "  |  " << attackArray[5][3] << "  |  " << attackArray[5][4] << "  |  " << attackArray[5][5] << "  |  " << attackArray[5][6] << "  |  " << attackArray[5][7] << "  |  " << attackArray[5][8] << "  |  " << attackArray[5][9] << "  |  " << endl;
	cout << "	  -------------------------------------------------------------" << endl;
	cout << "	G |  " << attackArray[6][0] << "  |  " << attackArray[6][1] << "  |  " << attackArray[6][2] << "  |  " << attackArray[6][3] << "  |  " << attackArray[6][4] << "  |  " << attackArray[6][5] << "  |  " << attackArray[6][6] << "  |  " << attackArray[6][7] << "  |  " << attackArray[6][8] << "  |  " << attackArray[6][9] << "  |  " << endl;
	cout << "	  -------------------------------------------------------------" << endl;
	cout << "	H |  " << attackArray[7][0] << "  |  " << attackArray[7][1] << "  |  " << attackArray[7][2] << "  |  " << attackArray[7][3] << "  |  " << attackArray[7][4] << "  |  " << attackArray[7][5] << "  |  " << attackArray[7][6] << "  |  " << attackArray[7][7] << "  |  " << attackArray[7][8] << "  |  " << attackArray[7][9] << "  |  " << endl;
	cout << "	  -------------------------------------------------------------" << endl;
	cout << "	I |  " << attackArray[8][0] << "  |  " << attackArray[8][1] << "  |  " << attackArray[8][2] << "  |  " << attackArray[8][3] << "  |  " << attackArray[8][4] << "  |  " << attackArray[8][5] << "  |  " << attackArray[8][6] << "  |  " << attackArray[8][7] << "  |  " << attackArray[8][8] << "  |  " << attackArray[8][9] << "  |  " << endl;
	cout << "	  -------------------------------------------------------------" << endl;
	cout << "	J |  " << attackArray[9][0] << "  |  " << attackArray[9][1] << "  |  " << attackArray[9][2] << "  |  " << attackArray[9][3] << "  |  " << attackArray[9][4] << "  |  " << attackArray[9][5] << "  |  " << attackArray[9][6] << "  |  " << attackArray[9][7] << "  |  " << attackArray[9][8] << "  |  " << attackArray[9][9] << "  |  " << endl;
	cout << "	  -------------------------------------------------------------" << endl;

}
void Board::DrawPlayerBoard(string str) {
	cout << "\n\n\t\t\t\t  BattleShip\n\n";
	cout << "\t\t\t\t   "<<str<<"\n\n";
	cout << "	  |  0  |  1  |  2  |  3  |  4  |  5  |  6  |  7  |  8  |  9  |" << endl;
	cout << "	  -------------------------------------------------------------" << endl;
	cout << "	A |  " << playerArray[0][0] << "  |  " << playerArray[0][1] << "  |  " << playerArray[0][2] << "  |  " << playerArray[0][3] << "  |  " << playerArray[0][4] << "  |  " << playerArray[0][5] << "  |  " << playerArray[0][6] << "  |  " << playerArray[0][7] << "  |  " << playerArray[0][8] << "  |  " << playerArray[0][9] << "  |  " << endl;
	cout << "	  -------------------------------------------------------------" << endl;
	cout << "	B |  " << playerArray[1][0] << "  |  " << playerArray[1][1] << "  |  " << playerArray[1][2] << "  |  " << playerArray[1][3] << "  |  " << playerArray[1][4] << "  |  " << playerArray[1][5] << "  |  " << playerArray[1][6] << "  |  " << playerArray[1][7] << "  |  " << playerArray[1][8] << "  |  " << playerArray[1][9] << "  |  " << endl;
	cout << "	  -------------------------------------------------------------" << endl;
	cout << "	C |  " << playerArray[2][0] << "  |  " << playerArray[2][1] << "  |  " << playerArray[2][2] << "  |  " << playerArray[2][3] << "  |  " << playerArray[2][4] << "  |  " << playerArray[2][5] << "  |  " << playerArray[2][6] << "  |  " << playerArray[2][7] << "  |  " << playerArray[2][8] << "  |  " << playerArray[2][9] << "  |  " << endl;
	cout << "	  -------------------------------------------------------------" << endl;
	cout << "	D |  " << playerArray[3][0] << "  |  " << playerArray[3][1] << "  |  " << playerArray[3][2] << "  |  " << playerArray[3][3] << "  |  " << playerArray[3][4] << "  |  " << playerArray[3][5] << "  |  " << playerArray[3][6] << "  |  " << playerArray[3][7] << "  |  " << playerArray[3][8] << "  |  " << playerArray[3][9] << "  |  " << endl;
	cout << "	  -------------------------------------------------------------" << endl;
	cout << "	E |  " << playerArray[4][0] << "  |  " << playerArray[4][1] << "  |  " << playerArray[4][2] << "  |  " << playerArray[4][3] << "  |  " << playerArray[4][4] << "  |  " << playerArray[4][5] << "  |  " << playerArray[4][6] << "  |  " << playerArray[4][7] << "  |  " << playerArray[4][8] << "  |  " << playerArray[4][9] << "  |  " << endl;
	cout << "	  -------------------------------------------------------------" << endl;
	cout << "	F |  " << playerArray[5][0] << "  |  " << playerArray[5][1] << "  |  " << playerArray[5][2] << "  |  " << playerArray[5][3] << "  |  " << playerArray[5][4] << "  |  " << playerArray[5][5] << "  |  " << playerArray[5][6] << "  |  " << playerArray[5][7] << "  |  " << playerArray[5][8] << "  |  " << playerArray[5][9] << "  |  " << endl;
	cout << "	  -------------------------------------------------------------" << endl;
	cout << "	G |  " << playerArray[6][0] << "  |  " << playerArray[6][1] << "  |  " << playerArray[6][2] << "  |  " << playerArray[6][3] << "  |  " << playerArray[6][4] << "  |  " << playerArray[6][5] << "  |  " << playerArray[6][6] << "  |  " << playerArray[6][7] << "  |  " << playerArray[6][8] << "  |  " << playerArray[6][9] << "  |  " << endl;
	cout << "	  -------------------------------------------------------------" << endl;
	cout << "	H |  " << playerArray[7][0] << "  |  " << playerArray[7][1] << "  |  " << playerArray[7][2] << "  |  " << playerArray[7][3] << "  |  " << playerArray[7][4] << "  |  " << playerArray[7][5] << "  |  " << playerArray[7][6] << "  |  " << playerArray[7][7] << "  |  " << playerArray[7][8] << "  |  " << playerArray[7][9] << "  |  " << endl;
	cout << "	  -------------------------------------------------------------" << endl;
	cout << "	I |  " << playerArray[8][0] << "  |  " << playerArray[8][1] << "  |  " << playerArray[8][2] << "  |  " << playerArray[8][3] << "  |  " << playerArray[8][4] << "  |  " << playerArray[8][5] << "  |  " << playerArray[8][6] << "  |  " << playerArray[8][7] << "  |  " << playerArray[8][8] << "  |  " << playerArray[8][9] << "  |  " << endl;
	cout << "	  -------------------------------------------------------------" << endl;
	cout << "	J |  " << playerArray[9][0] << "  |  " << playerArray[9][1] << "  |  " << playerArray[9][2] << "  |  " << playerArray[9][3] << "  |  " << playerArray[9][4] << "  |  " << playerArray[9][5] << "  |  " << playerArray[9][6] << "  |  " << playerArray[9][7] << "  |  " << playerArray[9][8] << "  |  " << playerArray[9][9] << "  |  " << endl;
	cout << "	  -------------------------------------------------------------" << endl;
}
Board::Board() {
	Init();
}
void Board::Init() {
	for (int i = 0; i < 10; i++) {
		for (int x = 0; x < 10; x++) {
			playerArray[i][x] = ' ';
			attackArray[i][x] = ' ';

		}
	}
};