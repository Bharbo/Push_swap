# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: blanna <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/06/30 16:37:03 by blanna            #+#    #+#              #
#    Updated: 2019/06/30 16:37:21 by blanna           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME_PS = push_swap
NAME_CH = checker

CC = gcc
FLAGS = -Wall -Werror -Wextra -O3
LIBS = -lft -L$(LIBFT_DIR)
INCLUDES = -I$(HEADERS_DIR) -I$(LIBFT_HEADERS)

LIBFT = $(LIBFT_DIR)libft.a
LIBFT_DIR = ./libft/
LIBFT_HEADERS = $(LIBFT_DIR)includes/

HEADERS_LIST = push_swap.h\
	checker.h
HEADERS_DIR = ./includes/
HEADERS = $(addprefix $(HEADERS_DIR), $(HEADERS_LIST))

SOURCES_DIR = ./srcs/
SOURCES_LIST =	add_func.c\
	for_partition_1.c\
	op_rotate.c\
	sort_3_a.c\
	check_arr.c\
	for_partition_2.c\
	op_push.c\
	op_swap.c\
	sort_3_b.c\
	check_sort.c\
	op_rev_rotate.c\
	output.c\
	sorting.c
MAIN_PS = main_ps.c
MAIN_CHECKER = main_checker.c
SOURCES = $(addprefix $(SOURCES_DIR), $(SOURCES_LIST))
SOURCES_PS = $(addprefix $(SOURCES_DIR), $(MAIN_PS))
SOURCES_CH = $(addprefix $(SOURCES_DIR), $(MAIN_CHECKER))

OBJ_DIR = obj/
OBJ_LIST = $(patsubst %.c, %.o, $(SOURCES_LIST))
OBJ_LIST_PS = $(patsubst %.c, %.o, $(MAIN_PS))
OBJ_LIST_CH = $(patsubst %.c, %.o, $(MAIN_CHECKER))
OBJECTS	= $(addprefix $(OBJ_DIR), $(OBJ_LIST))
OBJECTS_PS = $(addprefix $(OBJ_DIR), $(OBJ_LIST_PS))
OBJECTS_CH = $(addprefix $(OBJ_DIR), $(OBJ_LIST_CH))

.PHONY: all clean fclean re

all: $(NAME_PS) $(NAME_CH)

$(NAME_PS): $(LIBFT) $(OBJ_DIR) $(OBJECTS) $(OBJECTS_PS)
	@$(CC) $(FLAGS) $(LIBS) $(INCLUDES) $(OBJECTS) $(OBJECTS_PS) -o $(NAME_PS)
	@echo "$(NAME_PS): $(NAME_PS) object files are successfully created"
	@echo "$(NAME_PS): $(NAME_PS) was created"

$(NAME_CH): $(LIBFT) $(OBJ_DIR) $(OBJECTS) $(OBJECTS_CH)
	@$(CC) $(FLAGS) $(LIBS) $(INCLUDES) $(OBJECTS) $(OBJECTS_CH) -o $(NAME_CH)
	@echo "$(NAME_PS): $(NAME_CH) object files are successfully created"
	@echo "$(NAME_PS): $(NAME_CH) was created"

$(OBJ_DIR):
	@mkdir -p $(OBJ_DIR)
	@echo "$(NAME_PS): $(OBJ_DIR) was created"

$(OBJ_DIR)%.o : $(SOURCES_DIR)%.c $(HEADERS)
	@$(CC) $(FLAGS) -c $(INCLUDES) $< -o $@

$(LIBFT):
	@echo "$(NAME_PS): creating $(LIBFT)..."
	@$(MAKE) -sC $(LIBFT_DIR)

clean:
	@$(MAKE) -sC $(LIBFT_DIR) clean
	@rm -rf $(OBJ_DIR)
	@echo "$(NAME_PS): $(OBJ_DIR) was deleted"
	@echo "$(NAME_PS): object files successfully deleted"

fclean: clean
	@rm -f $(LIBFT)
	@echo "$(NAME_PS): $(LIBFT) was deleted"
	@rm -f $(NAME_PS)
	@echo "$(NAME_PS): $(NAME_PS) was deleted"
	@rm -f $(NAME_CH)
	@echo "$(NAME_PS): $(NAME_CH) was deleted"

re:
	@$(MAKE) fclean
	@$(MAKE) all
