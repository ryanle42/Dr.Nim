#include "NIM.h"

int main()
{
	char option;
	int winner;

	while (1)
	{
		option = menu();
		if (option == 'c')
		{
			rules();
			continue;
		}
		if (option == 'a')
		{
			winner = drNim();
			if (winner)
			{
				printf("You win!\n");
			}
			else
			{
				printf("Dr. NIM wins\n\n");
				printf("Play again? (y/n)\n");
				while (option != 'y' && option != 'n')
					option = getchar();
				if (option == 'y')
					continue;
				else
					return (1);
			}
			continue;
		}
		if (option == 'b')
		{
			winner = PvP();
			if (winner)
			{
				printf("\nPlayer 1 wins!\n");
				printf("Play again? (y/n)\n");
				while (option != 'y' && option != 'n')
					option = getchar();
				if (option == 'y')
					continue;
				else
					return (1);
			}
			else
			{
				printf("\nPlayer 2 wins!\n");
				printf("Play again? (y/n)\n");
				while (option != 'y' && option != 'n')
					option = getchar();
				if (option == 'y')
					continue;
				else
					return (1);
			}
		}
	}
	return (1);
}