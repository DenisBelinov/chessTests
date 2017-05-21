#include "Figures.h"

/*
ALL isMoveValids ARE UNFINISHED.
THEY ARE USELESS IN THIS STATE TOO, I KNOW.
THE WHOLE IMPLEMENTATION HAS TESTING PURPOUSES.

They are intended to check if the coords are in the board
and the move is valid for the chosen figure.

There is no good way of doing the Pawn one 
with the current form of the Figure class :(.
*/

bool Pawn::isMoveValid(int curX, int curY, int destX, int destY) const
{
	if (destX < BOARD_SIZE && destY < BOARD_SIZE) return true;
	return false;
}
void Pawn::printFigure() const
{
	if (color) std::cout << "wp";
}

bool Rook::isMoveValid(int curX, int curY, int destX, int destY) const
{
	if (destX < BOARD_SIZE && destY < BOARD_SIZE) return true;
	return false;
}
void Rook::printFigure() const
{
	if (color) std::cout << "wr";
	else std::cout << "br";
}

bool Bishop::isMoveValid(int curX, int curY, int destX, int destY) const
{
	if (destX < BOARD_SIZE && destY < BOARD_SIZE) return true;
	return false;
}
void Bishop::printFigure() const
{
	if (color) std::cout << "wb";
	else std::cout << "bb";
}

bool Knight::isMoveValid(int curX, int curY, int destX, int destY) const
{
	if (destX < BOARD_SIZE && destY < BOARD_SIZE) return true;
	return false;
}
void Knight::printFigure() const
{
	if (color) std::cout << "wk";
	else std::cout << "bk";
}

bool Queen::isMoveValid(int curX, int curY, int destX, int destY) const
{
	if (destX < BOARD_SIZE && destY < BOARD_SIZE) return true;
	return false;
}
void Queen::printFigure() const
{
	if (color) std::cout << "wq";
	else std::cout << "bq";
}

bool King::isMoveValid(int curX, int curY, int destX, int destY) const
{
	if (destX < BOARD_SIZE && destY < BOARD_SIZE) return true;
	return false;
}
void King::printFigure() const
{
	if (color) std::cout << "wK";
	else std::cout << "bK";
}
