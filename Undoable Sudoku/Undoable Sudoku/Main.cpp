#include "Board.h"

int main()
{
	Board *board = new Board();

	board->PrintBoard();
	if (board->CheckColumn() == true && board->CheckRegion() == true && board->CheckRow() == true)
	{
		cout << "Game Finished" << endl;
	}
	else
	{
		cout << "GAME OVER! " << endl;
	}

	return 0;
}