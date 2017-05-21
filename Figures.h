#ifndef FIGURES_H_
#define FIGURES_H_
#include <iostream>
const int BOARD_SIZE = 8;
enum Type
{
	pawn, rook, bishop, knight, queen, king
};

class Figure
{
public:
	virtual bool isMoveValid(int curX, int curY, int destX, int destY) const = 0;
	virtual void printFigure() const = 0;
	virtual bool getColor() const = 0;
};

class Pawn : public Figure
{
	Type figureType = pawn;
	bool color; //true = white, false = black
public:
	Pawn(bool _color) : color(_color) {};
	virtual bool isMoveValid(int curX, int curY, int destX, int destY) const override;
	virtual void printFigure() const override;
	virtual bool getColor() const override { return color; };
};

class Rook : public Figure
{
	Type figureType = rook;
	bool color;
public:
	Rook(bool _color) : color(_color) {};
	virtual bool isMoveValid(int curX, int curY, int destX, int destY)  const override;
	virtual void printFigure() const override;
	virtual bool getColor() const override { return color; };
};

class Bishop : public Figure
{
	Type figureType = bishop;
	bool color;
public:
	Bishop(bool _color) : color(_color) {};
	virtual bool isMoveValid(int curX, int curY, int destX, int destY) const override;
	virtual void printFigure() const override;
	virtual bool getColor() const override { return color; };
};

class Knight : public Figure
{
	Type figureType = knight;
	bool color;
public:
	Knight(bool _color) : color(_color) {};
	virtual bool isMoveValid(int curX, int curY, int destX, int destY) const override;
	virtual void printFigure() const override;
	virtual bool getColor() const override { return color; };
};

class Queen : public Figure
{
	Type figureType = queen;
	bool color;
public:
	Queen(bool _color) : color(_color) {};
	virtual bool isMoveValid(int curX, int curY, int destX, int destY) const override;
	virtual void printFigure() const override;
	virtual bool getColor() const override { return color; };
};

class King : public Figure
{
	Type figureType = king;
	bool color;
public:
	King(bool _color) : color(_color) {};
	virtual bool isMoveValid(int curX, int curY, int destX, int destY) const override;
	virtual void printFigure() const override;
	virtual bool getColor() const override { return color; };
};
#endif
