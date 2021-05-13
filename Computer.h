#pragma once
#include "TheGame.h"
#include "BotMovesGrade.h"

class Computer : public TheGame
{
protected:
	BotMovesGrade calculatePos;
public:
	Computer(){}
	char ChooseComputerLevel();
	void LessSpaces(general* f);

};