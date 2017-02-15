#ifndef NIM_H
# define NIM_H

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// menu
char	menu();
void	rules();

// controls
void	clear();
void	print_marbles(int marbles);

// modes
int		drNim();
int		PvP();

# endif