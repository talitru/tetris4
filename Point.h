#pragma once
#include "gotoxy.h"

class Point
{
	int x;
	int y;
	bool IsBusy;
	char ch; //the sign of the point
public:
	//ctor
	Point() {};
	Point(int _x, int _y, bool _IsBusy, char _ch ) :x(_x), y(_y), IsBusy(_IsBusy), ch(_ch) {};

	//setters

	void SetPoint(int _x, int _y, bool _IsBusy, char _ch)
	{
		int x = _x;
		int y = _y;
		bool IsBusy = _IsBusy;
		char ch = _ch;
	};
	void Set_X(int _x)
	{
		x = _x;
	}
	void Set_Y(int _y)
	{
		y = _y;
	}
	void SetIsBusy(bool _IsBusy)
	{
		IsBusy = _IsBusy;
	}
	//getters
	void draw() const
	{
		gotoxy(x, y);
		cout << ch;
	}
	int getX()const
	{
		return x;
	}
	int gety()const
	{
		return y;
	}
	char getChar()const
	{
		return ch;
	}
	bool getIsBusy()const
	{
		return IsBusy;
	}

};
