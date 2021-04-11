#include "Board.h"
#include "gotoxy.h"

Board::Board()
{
	initBoard();
}

void Board::initBoard()
{
	for (int i = 0; i < ROWS+2; i++)
	{
		for (int j = 0; j < 2 * COLS + 3; j++)
		{
			if (i == 0 ||i==ROWS+1||j==0|| j == COLS + 1 || j == (2 * COLS) + 2)
			{
				gotoxy(j, i);
				cout << '*';
				GameBoard[i][j].SetPoint(i, j, true ,'*');

			}
			else
			{
				gotoxy(j, i);
				cout << ' ';
				GameBoard[i][j].SetPoint( i,j,false,' ');
			}
		}
	}

	printMenu();
}

void Board::printMenu()
{
	gotoxy(0, ROWS + 3);
	cout << "Please select one of the options:" << endl;
	cout << "(1) Start a new game" << endl;
	cout << "(2) Continue a paused game/resume game" << endl;
	cout << "(8) Present instructions and keys" << endl;
	cout << "(9) EXIT" << endl;
}