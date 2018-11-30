NAME = libft.a
CFLAGS		= -Wall -Werror -Wextra -I. -c
FILES		= ft_memset.c \
				ft_bzero.c\
				ft_memcpy.c\
				ft_memccpy.c\
				ft_memmove.c\
				main.c\
OBJ			= $(FILES:%.c=%.o)

FILES2		= ft_memset.c \
				ft_bzero.c\
				ft_memcpy.c\
				ft_memccpy.c\
				ft_memmove.c\
				main.c\
all: $(NAME)

so:
	gcc -shared -o libft.so -fPIC $(FILES2)

copy:
	cp -f libft/*.c .
	cp -f PATR2/*.c .

# This won't run if the .o files don't exist or are not modified
$(NAME):
	gcc $(CFLAGS) $(FILES)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

# This won't run if the source files don't exist or are not modified
$(OBJ): $(FILES)
	gcc $(CFLAGS) $(FILES)

clean:
	rm -f $(OBJ)
	rm -f $(FILES) # comment this line if you don't want it to remove the source files from the root

fclean: clean
	rm -f $(NAME)

re: fclean all

# I use .PHONY to make sure that gnu make will still run even if files called
# clean / fclean / all and re already exist in the directory
.PHONY: clean fclean all re
