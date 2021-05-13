#pragma once
#include "Figure.h"
#include "Board.h"
#include "general.h"

class Bomb : public general
{
	Point bomb;
	int serialNum = BOMB;
public:
	Bomb() {}
	//virtual ~Bomb();
	Bomb(int playerNum,Board& board) {
		if (playerNum == LEFT_PLAYER)
		{
			initBomb(X1, Y1);
		}
		else if (playerNum == RIGHT_PLAYER)
		{
			initBomb(X2, Y2);
		}
	}
	void initBomb(int x, int y);
	bool update(Board& board, int serialNum, int dir) override;
	void explodeBomb(Board& board);
	void print(Board& board) override;
	virtual int getSerial()const
	{
		return serialNum;
	}
	virtual Point& getBodyPos(int i)
	{
		return bomb;
	}
	virtual int getSize()const
	{
		return 1;
	}
	virtual int getRotateNum()const
	{
		return 0;
	}


}; 
