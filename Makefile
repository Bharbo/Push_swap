NAME = libft.a
CFLAGS		= -Wall -Werror -Wextra -I. -c
FILES		=*.c  
OBJ			=*.o

all: $(NAME)

$(NAME):
	gcc $(CFLAGS) $(FILES)
	ar rc $(NAME) $(OBJ)

$(OBJ): $(FILES)
	gcc $(CFLAGS) $(FILES)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
