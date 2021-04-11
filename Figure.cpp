#include "Figure.h"

void Figure::Rotate()
{
	
}
void Figure::RightOrLeftOrdown()
{

}void Figure::printFigure(Board& board,int serialNum)
{
	switch (serialNum) //0-6
	{
	case SHAPES::LINE:
	{
		for (Point& p : FigureBody)
		{
			if (board.isValidPoint(p.getX(), p.gety()))
			{
				board.turnToBusyPoint(p.getX(), p.gety());
			}

		}
	}
	case SHAPES::L:
	{
		for (Point& p : FigureBody)
		{
			if (board.isValidPoint(p.getX(), p.gety()))
			{
				board.turnToBusyPoint(p.getX(), p.gety());
			}

		}
	}
	case SHAPES::RL:
	{
		for (Point& p : FigureBody)
		{
			if (board.isValidPoint(p.getX(), p.gety()))
			{
				board.turnToBusyPoint(p.getX(), p.gety());
			}

		}
	}
	case SHAPES::SQUARE:
	{
		for (Point& p : FigureBody)
		{
			if (board.isValidPoint(p.getX(), p.gety()))
			{
				board.turnToBusyPoint(p.getX(), p.gety());
			}

		}
	}
	case SHAPES::Z:
	{
		for (Point& p : FigureBody)
		{
			if (board.isValidPoint(p.getX(),p.gety()))
			{
				board.turnToBusyPoint(p.getX(), p.gety());
			}

		}
	}
	case SHAPES::RZ:
	{
		for (Point& p : FigureBody)
		{
			if (board.isValidPoint(p.getX(), p.gety()))
			{
				board.turnToBusyPoint(p.getX(), p.gety());
			}

		}
	}
	case SHAPES::PLUS:
	{
		for (Point& p : FigureBody)
		{
			if (board.isValidPoint(p.getX(), p.gety()))
			{
				board.turnToBusyPoint(p.getX(), p.gety());
			}

		}
	}
	}
}



void Figure::initFigureBySerialNum(int serial_num_of_figure,int x,int y)
{

	switch (serial_num_of_figure) //1-7
	{
	case SHAPES::LINE:
	{
		 
		for (int j = 0; j < SIZE; j++)
		{
			FigureBody[j].SetPoint(x + j, y, true, '#');

		}
		break;

	}

	case SHAPES::L:
	{
		FigureBody[0].SetPoint(x, y, true, '#');
		FigureBody[1].SetPoint(x, y + 1, true, '#');
		FigureBody[2].SetPoint(x + 1, y + 1, true, '#');
		FigureBody[3].SetPoint(x + 2, y + 1, true, '#');

		break;
	}
	case SHAPES::RL://reversed L
	{
		FigureBody[0].SetPoint(x, y, true, '#');
		FigureBody[1].SetPoint(x, y + 1, true, '#');
		FigureBody[2].SetPoint(x - 1, y + 1, true, '#');
		FigureBody[3].SetPoint(x - 2, y + 1, true, '#');
		
		break;
	}
	case SHAPES::SQUARE:
	{
		FigureBody[0].SetPoint(x, y, true, '#');
		FigureBody[1].SetPoint(x+1, y, true, '#');
		FigureBody[2].SetPoint(x , y + 1, true, '#');
		FigureBody[3].SetPoint(x +1, y + 1, true, '#');

		break;
	}
	case SHAPES::Z:
	{
		FigureBody[0].SetPoint(x, y, true, '#');
		FigureBody[1].SetPoint(x+1, y, true, '#');
		FigureBody[2].SetPoint(x+1, y + 1, true, '#');
		FigureBody[3].SetPoint(x + 2, y + 1, true, '#');

		break;
	}


	case SHAPES::RZ://reversed Z
	{
		FigureBody[0].SetPoint(x, y, true, '#');
		FigureBody[1].SetPoint(x+1, y, true, '#');
		FigureBody[2].SetPoint(x , y + 1, true, '#');
		FigureBody[3].SetPoint(x - 1, y + 1, true, '#');

		break;
	}

	case SHAPES::PLUS :
	{
		FigureBody[0].SetPoint(x, y, true, '#');
		FigureBody[1].SetPoint(x, y + 1, true, '#');
		FigureBody[2].SetPoint(x - 1, y + 1, true, '#');
		FigureBody[3].SetPoint(x + 1, y + 1, true, '#');

		break;
	}

}
	
}
void updateFigure(char direction)
{

}


