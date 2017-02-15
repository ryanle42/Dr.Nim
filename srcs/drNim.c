#include "NIM.h"

int drNim()
{
	clear();
	int marbles;
	int input;
	int thinking;

	srand(time(NULL));
	marbles = 12;
	while (1)
	{
		printf("There are currently %i marbles left\n\n", marbles);
		print_marbles(marbles);
		printf("How many marbles do you take?: ");
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
			return (1);
		printf("\nDr. NIM is thinking...\n");
		thinking = rand() % 3;
		if (thinking < 1)
			thinking = 1;
		sleep(thinking);
		clear();
		if (4 - input == 1)
			printf("Dr. NIM takes %i marble\n\n", 4 - input);
		else
			printf("Dr. NIM takes %i marbles\n\n", 4 - input);
		sleep(1.5);
		marbles -= (4 - input);
		if (marbles == 0)
		{
			printf("There are 0 marbles left\n\n");
			return (0);
		}
	}


}