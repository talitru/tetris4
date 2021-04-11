#pragma once

#include "Board.h"
#include "Figure.h"
#include "Player.h"

enum menuKeys { START = '1', PAUSE = '2', INSTRUCTIO_KEYS = '8', EXIT = '9'};
enum { ESC = 27 };//escape
enum { RAND = 7 };

class TheGame
{
	Board GameBoard;
	Figure f;
public:
	TheGame() {}; //ctor
	void setBoard()
	{
		GameBoard.initBoard();
	}

	Figure& createFigure(int numOfPlayer,int* serialNum);
	void RunGame();
	void ContinuePausedGame();
	void ShowInstructions();
	void MoveFigure(Board& board,char direction,int x,int y);
	void ExitGame();
};