#include "Board.h"

Board::Board()
{
	setToDefault();
}
void Board::print()
{
	for (size_t i = 0; i < SIZE; i++)
	{
		for (size_t j = 0; j < SIZE; j++)
		{
			if (squares[i][j])
			{
				std::cout << ' ';
				squares[i][j]->printFigure();
				std::cout << ' ';
			}
			else
				std::cout << " 00 ";
		}
		std::cout << std::endl;
	}
}
void Board::moveFigure(int curX, int curY, int destX, int destY)
{
	if (squares[curX][curY] == nullptr) 
		std::cout << "Invalid Current Figure coords";
	else if (squares[curX][curY] -> isMoveValid(curX, curY, destX, destY))
	{

		//at this point we should know wether the coords are valid
		//and the move is appropriate for the chosen Figure
		//maybe it's better to check if the coords are correct for the board
		//in this moveFigure function, but as I'm too lazy to finish the
		//isMoveValid functions, I let them do that atleast.
		if (squares[destX][destY] == nullptr ||
			(squares[curX][curY]->getColor() != squares[destX][destY]->getColor()))
		{
			delete squares[destX][destY];
			squares[destX][destY] = squares[curX][curY];
			squares[curX][curY] = nullptr;
		}
		else
			std::cout << "Invalid Destination coords";
	}
}
void Board::setToDefault() // unfinished
{
	//initializing white figures
	squares[0][0] = new Rook(true);
	squares[0][1] = new Knight(true);
	squares[0][2] = new Bishop(true);
	squares[0][3] = new Queen(true);
	squares[0][4] = new King(true);
	squares[0][5] = new Bishop(true);
	squares[0][6] = new Knight(true);
	squares[0][7] = new Rook(true);
	for (size_t i = 0; i < SIZE - 1; i++)
	{
		squares[1][i] = new Pawn(true);
	}
}

