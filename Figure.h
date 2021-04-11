#pragma once
#include "Board.h"
#include "Player.h"
#include <iostream>

enum SHAPES { LINE = 0, L = 1, RL = 2, SQUARE = 3, Z = 4, RZ =5, PLUS = 6 };//RT=reversed T=  *
																	 //=          *** 
enum startValue {X1=5, Y1 = 1, X2 = 18, Y2 = 1};
class Figure                                        
{
	enum { SIZE = 4 };
	Point FigureBody[SIZE]; 
	//int serial_num_of_figure=0;

public:
	//// empty ctor
	Figure()
	{

	}
	Figure(int serialNum,int playerNum) 
	{
		//SetSerialNum(serialNum);
		if (playerNum == LEFT_PLAYER)
		{
			initFigureBySerialNum( serialNum,X1, Y1);
		}
		else if (playerNum == RIGHT_PLAYER)
		{
			initFigureBySerialNum(serialNum,X2, Y2);
		}
		

	};
	//void SetSerialNum(int num) { serial_num_of_figure = num; };
	//int GetSerialNum() const { return serial_num_of_figure; };
	void initFigureBySerialNum(int serialNum,int x,int y);
	void printFigure(Board& board,int serialNum);
	void updateFigure(char direction);
	void Rotate();
	void RightOrLeftOrdown();
	
	

};