#pragma once
#include "Board.h"
 enum {LEFT_PLAYER=1,RIGHT_PLAYER=2};

class Player
{
	int serialPlayerNum;


public:
	//Player(); //ctor
	void SetSerialNum(int num)
	{
		serialPlayerNum = num;
	}
/*
	void moveLeft();
	void moveRight();
	void RotateLeft();
	void RotateRight()*/;
	
};
