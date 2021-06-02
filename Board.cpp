#include <iostream>
#include "Board.h"
using namespace std;

class Board {
private:
	char board[10][10];
public:
	void DrawBoard() {
		for (int i = 0; i < 10; i++) {
			for (int x = 0; x < 10; x++){
				board[i][x] = ' ';
			}
		}
		for (int i = 0; i < 10; i++) {
			cout << endl;
			for (int x = 0; x < 10; x++) {
				cout << board[i][x] ;
			}
		}

	}
};
int main() {
	Board board;
	board.DrawBoard();
}