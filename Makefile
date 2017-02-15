NAME = Play

SRCS = controls.c drNim.c main.c menu.c pvp.c

INCLUDES = -I .

all: $(NAME)

$(NAME): $(SRCS)
	gcc -o $(NAME) $(SRCS) $(INCLUDES)

re: 
	rm $(NAME)
	make

