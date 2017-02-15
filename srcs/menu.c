#include "NIM.h"

char menu()
{
	char option;

	option = '.';
	while (1)
	{	
		clear();
		printf("Dr. NIM\n");
		printf("(a) Play Dr. NIM\n");
		printf("(b) PvP\n");
		printf("(c) Rules\n");
		option = getchar();
		if (option != 'a' && option != 'b' && option != 'c')
			continue;
		else
			return (option);
	}
}

void rules()
{
	char option;

	option = '.';
	while (option != 'm')
	{
		clear();
		printf("The game starts with 12 marbles. Each turn you take 1-3 marbles. Whoever takes the last marble wins.\n");
		printf("(m)enu\n");
		option = getchar();
	}
}