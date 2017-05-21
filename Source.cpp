#include <iostream>
#include "Board.h"

int main()
{
	Board board;
	board.print();
	board.moveFigure(0, 0, 4, 4);
	std::cout << std::endl;
	board.print();

	return 0;
}
