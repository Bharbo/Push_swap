NAME = libft.a
SRC = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c srcs/ft_strlen.c srcs/ft_swap.c
HEADER_FOLDER = includes/

all: $(NAME)

$(NAME):
	gcc -c $(SRC) -I $(HEADER_FOLDER)
	ar rc $(NAME) ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all
