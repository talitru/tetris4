
#include "TheGame.h"
#include "Board.h"
#include "Figure.h"
#include <conio.h>
#include <iostream>

char LeftPlayerKeys[10] = { 'a','A','d','D','s','S','w','W','x','X'};
char RightPlayerKeys[10] = { 'j','J','l','L','k','K','i','I','m','M' };


void TheGame::RunGame()
{
	char key_char=0;
	int x1 = 5;//(COLS/ 2)-1;
	int y1 = 1;
	int x2 = 18;//(COLS + 2+(COLS/2)-1);
	int y2 = 1;
	int serialNum1 = -1;
	int serialNum2 = -1;

	while (key_char!=EXIT&&key_char!=ESC)
	{

		if (_kbhit())
		{

			key_char = _getch();
			if (key_char== INSTRUCTIO_KEYS)
			{
			   ShowInstructions();
			}
			else if (key_char == START)
			{
				Figure& f1= createFigure(LEFT_PLAYER,&serialNum1);
				Figure& f2= createFigure(RIGHT_PLAYER ,&serialNum2);

				while(key_char != EXIT && key_char != ESC)
				{
					gotoxy(x1, y1);

					f1.printFigure (this->GameBoard,serialNum1);  //אמור להדפיס את הצןרה הראשונה בלוח אחד
					Sleep(200);

					
					if ((y2 < ROWS) && y2 != 1)
					{
						gotoxy(14, y2 - 1);
						cout << "            ";
					}
					gotoxy(x2, y2);  //ובלוח השני
					
					f2.printFigure (this->GameBoard,serialNum2);
					Sleep(200);

					if (y1 < ROWS - 1)
					{
						gotoxy(1, y1);
						cout << "            ";
					}


					y1++;
					y2++;

					if ((y1 > ROWS - 1) || (y2 > ROWS - 1))
					{
						y1 = y2 = 1;
						f1=createFigure(LEFT_PLAYER ,&serialNum1);
						f2=createFigure(RIGHT_PLAYER, &serialNum2);
					}

					if (_kbhit())
					{
						key_char = _getch();
						bool isValidDirection = false;
						for (char i : LeftPlayerKeys)
						{
							if (i == key_char&&!isValidDirection)
							{
								isValidDirection = true;
								MoveFigure(this->GameBoard,key_char,x1,y1);
						
							}
							
						}
						if (!isValidDirection)
						{
							for (char i : RightPlayerKeys)
							{
								if (i == key_char&&!isValidDirection)
								{
									isValidDirection = true;
									MoveFigure(this->GameBoard,key_char,x2,y2);

								}

							}
						}

					}



				}//מסתיים while פנימי

			} //איזה מקש הוקש?

		} // האם הוקש מקש?

	} //מסתיים while חיצוני


	
}

void TheGame::MoveFigure(Board& board,char direction,int x, int y ) // קוראת לפונקציות תזוזה לפי המקשים
{
	if (direction == 'A' || direction == 'a')
	{
		--x;
	}
	else if (direction == 'D' || direction == 'd')
	{
		++x;
	}
	
	else if (direction == 'J' || direction == 'j')
	{
		--x;
	}
	else if (direction == 'L' || direction == 'l')
	{
		++x;
	}
	else if (direction == 'K' || direction == 'k')
	{
		//RPlayer_rotateRight();
	}
	else if (direction == 'I' || direction == 'i')
	{
		//RPlayer_rotateLeft();
	}
	else if (direction == 'M' || direction == 'm')
	{
		//LPlayer_rotateLeft(); 
	}
}

Figure& TheGame::createFigure(int numOfPlayer,int* serialNum)
{
	int randFigure= rand() % RAND; //0-6
	switch (randFigure)
	{
	case 0:
	{
		Figure line(LINE, numOfPlayer);

		//line.SetSerialNum(SHAPES::Line);
		*serialNum = LINE;

		return line;
		
		
		break;

	}
	case 1:
	{
		Figure L1(L, numOfPlayer);
	//	L1.SetSerialNum(SHAPES::L);
		*serialNum = L;
		return L1;
		break;
	}
	case 2:
	{
		Figure RL1(RL, numOfPlayer);
		//RL1.SetSerialNum(SHAPES::RL);
		*serialNum = RL;
		return RL1;
		break;
	}
	case 3:
	{
		Figure Square1(SQUARE, numOfPlayer);
		//Square1.SetSerialNum(SHAPES::Square);
		*serialNum = SQUARE;
		return Square1;
		
		break;
	}
	case 4:
	{
		Figure RZ1(RZ, numOfPlayer);
		*serialNum =RZ;
		//RZ1.SetSerialNum(SHAPES::RZ);
		return RZ1;
		
		break;
	}
	case 5:
	{
		Figure Z1(Z, numOfPlayer);
		//Z1.SetSerialNum(SHAPES::Z);
		*serialNum = Z;

		return Z1;
		
		break;
	}
	case 6:
	{
		Figure Plus1(PLUS,numOfPlayer);
		//Plus1.SetSerialNum(SHAPES::Plus);
		*serialNum = PLUS;
		return Plus1;
		break;
	}
	}
	
}

void TheGame::ShowInstructions()
{
	std::cout <<endl <<"Goal: You have to make full horizontal lines with the different shaped blocks that fall into the game area.Full lines will then disappear and Increases the chance of winning the game" << endl;
	std::cout << "The player whose board is filled first loses, the other player wins";
	std::cout << "Controls:" << endl << "Player 1(The left player):" << endl << "'a' or 'A' key : move block to the left" << endl << "'d' or 'D' key : move block to the right" << endl << "'s' or 'S' key : rotate block clockwise" << endl << "'w' or 'W' key : rotate block counterclockwise" << endl << "'x' or 'X' key : move block down";
	std::cout << "Controls:" << endl << "Player 2(The right player):" << endl << "'j' or 'J' key : move block to the left" << endl << "'l' or 'L' key : move block to the right" << endl << "'k' or 'K' key : rotate block clockwise" << endl << "'i' or 'I' key : rotate block counterclockwise" << endl << "'m' or 'M' key : move block down"<<endl;
}

void TheGame::ContinuePausedGame()
{
	system("cls");
}

void TheGame::ExitGame()
{
	//system("cls");//not sure
	
	exit(0);
}




