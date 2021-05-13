#pragma once


class BotMovesGrade
{
	int DeletedLines=0;
	int Height=0;
public:
	void SetHeight(int _height)
	{
		Height = _height;
	}
	void SetDeletedLines(int _deletedLines)
	{
		DeletedLines = _deletedLines;
	}
	int GetHeight()const
	{
		return Height;
	}
	int GetDeletedLines()const
	{
		return DeletedLines;
	}
};
