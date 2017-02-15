#include "NIM.h"

int PvP()
{
	clear();
	int marbles;
	int input;
	int player;

	player = 0;
	marbles = 12;
	while (1)
	{
		clear();
		printf("\nThere are currently %i marbles left\n\n", marbles);
		print_marbles(marbles);
		printf("Player %i, how many marbles do you take?: ", (player % 2) + 1);
		scanf("%i", &input);
		while (!(input >= 1 && input <= 3) || marbles - input < 0)
		{
			if (!(input >= 1 && input <= 3))
				printf("\nYou can only take 1-3 marbles!\n");
			else if (marbles - input < 0)
				printf("\nYou can't take that many marbles!\n");
			else
				break;
			scanf("%i", &input);
		}
		marbles -= input;
		if (marbles == 0)
		{
			if (player % 2)
				return (0);
			else
				return (1);
		}
		player++;
	}
}