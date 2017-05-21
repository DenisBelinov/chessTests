#ifndef BOARD_H_
#define BOARD_H_
#include "Figures.h"

const int SIZE = 8;

class Board
{
public:
	Figure* squares[SIZE][SIZE] = { nullptr };
public:
	Board();
	void print();
	void moveFigure(int curX, int curY, int destX, int destY);
	void setToDefault(); // sets the pieces to their starting positions 
};
#endif
