#pragma once
#include <iostream>
#include "Point.h"
using namespace std;

enum { ROWS = 18, COLS= 12 };

class Board
{

	Point GameBoard[ROWS][COLS];
	
	public:
		//ctor
		Board();
		void initBoard();
		void printMenu(); 
		bool isValidPoint(int x, int y)
		{
			if ((!GameBoard[y][x].getIsBusy())&& (GameBoard[y][x].getChar()!='*')&& x >= 1 && x !=(COLS+2) && x <= (COLS * 2 + 2 )&& y >= 1 && y <= ROWS)
				return true;
			return false;
		}
		void turnToBusyPoint(int x, int y,char ch='#')
		{
			GameBoard[y][x].SetPoint(x, y, true, ch);
			gotoxy(x, y);
			cout << '#';
		}
		void turnToFreePoint(int x, int y, char ch = ' ')
		{
			GameBoard[y][x].SetPoint(x, y, false, ch);
			gotoxy(x, y);
			cout << ' ';
		}

};
