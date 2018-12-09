NAME = libft.a
CFLAGS		= -Wall -Werror -Wextra -I. -c
FILES		= ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c ft_memmove.c ft_memchr.c ft_memcmp.c ft_strcat.c ft_strcmp.c ft_strcpy.c ft_strdup.c ft_strncpy.c ft_strlen.c main.c ft_strstr.c ft_strrchr.c ft_strncat.c ft_strchr.c ft_strlcat.c ft_strnstr.c ft_strncmp.c ft_isdigit.c ft_isalpha.c ft_isalnum.c ft_isprint.c ft_isascii.c ft_toupper.c ft_tolower.c ft_isupper.c ft_islower.c ft_atoi.c ft_putchar.c ft_putstr.c ft_putnbr.c ft_putchar_fd.c ft_putstr_fd.c ft_putnbr_fd.c ft_putendl.c ft_strnew.c ft_memalloc.c ft_strjoin.c ft_memdel.c ft_putendl_fd.c ft_strdel.c ft_strclr.c ft_striter.c ft_striteri.c ft_strmap.c ft_strmapi.c ft_strequ.c ft_strnequ.c ft_strsub.c ft_strtrim.c ft_strsplit.c ft_itoa.c
OBJ			= $(FILES:%.c=%.o)

FILES2		= ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c ft_memmove.c ft_memchr.c ft_memcmp.c ft_strcat.c ft_strcmp.c ft_strcpy.c ft_strdup.c ft_strncpy.c ft_strlen.c main.c ft_strstr.c ft_strrchr.c ft_strncat.c ft_strchr.c ft_strlcat.c ft_strnstr.c ft_strncmp.c ft_isdigit.c ft_isalpha.c ft_isalnum.c ft_isprint.c ft_isascii.c ft_toupper.c ft_tolower.c ft_isupper.c ft_islower.c ft_atoi.c ft_putchar.c ft_putstr.c ft_putnbr.c     ft_putchar_fd.c ft_putstr_fd.c ft_putnbr_fd.c ft_putendl.c ft_strnew.c ft_memalloc.c ft_strjoin.c ft_memdel.c ft_putendl_fd.c ft_strdel.c ft_strclr.c ft_striter.c ft_striteri.c ft_strmap.c ft_strmapi.c ft_strequ.c ft_strnequ.c ft_strsub.c ft_strtrim.c ft_strsplit.c ft_itoa.c

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
#	rm -f $(FILES) # comment this line if you don't want it to remove the source files from the root

fclean: clean
	rm -f $(NAME)

re: fclean all

# I use .PHONY to make sure that gnu make will still run even if files called
# clean / fclean / all and re already exist in the directory
.PHONY: clean fclean all re
