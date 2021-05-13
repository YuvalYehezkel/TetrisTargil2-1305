#include "tetris.h"
#include "Computer.h"


void tetris::ChooseGame() // ���� ������ ������ �� ����� ��� ��� �� ������� �����
{
	char key_char = 0;
	TheGame* game = nullptr;
	Computer* c = nullptr;
	while (1)
	{
		if (_kbhit())
		{
			key_char = _getch();
			if (game == nullptr && key_char == INSTRUCTIO_KEYS)
			{
				game->getMenuInstructions();
			}
			if (key_char == STARTHvsH)
			{
				game = new HumanVsHuman();

			}
			else if (key_char == STARTHvsC)
			{
				c->ChooseComputerLevel();
				game = new HumanVsComputer();

			}
			else if (key_char == STARTCvsC)
			{
				c->ChooseComputerLevel();
				game = new ComputerVsComputer();

			}
			game->RunGame();
			delete game;

		}
	}
}



