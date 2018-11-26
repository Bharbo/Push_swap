EXE = ft_display_file
SRC = srcs/ft_putchar.c srcs/ft_putstr.c *.c
HEADER_FOLDER = includes/
FLAGS = -Wall -Wextra -Werror
all: fclean $(EXE)

$(EXE):
	gcc $(FLAGS) $(SRC) -I $(HEADER_FOLDER) -o $(EXE)

clean:
	rm -f $(EXE)

fclean: clean
	rm -fr $(EXE)
