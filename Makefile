NAME = Play

SRCS = ./srcs/controls.c ./srcs/drNim.c ./srcs/main.c ./srcs/menu.c ./srcs/pvp.c

INCLUDES = -I ./includes

all: $(NAME)

$(NAME): $(SRCS)
	gcc -o $(NAME) $(SRCS) $(INCLUDES)

re: 
	rm $(NAME)
	make

