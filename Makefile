# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pandalaf <pandalaf@student.42wolfsburg.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/30 23:15:27 by pandalaf          #+#    #+#              #
#    Updated: 2022/10/31 13:57:02 by pandalaf         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Target output
NAME := push_swap
BONUS_NAME := checker
# Compiler options
CC := cc
CFLAGS := -Wall -Werror -Wextra
COPTIONS := -g
# Libft location
LIBFT := libft.a
LIBFT_PATH := libft/
LIBFT_FULL = $(addprefix $(LIBFT_PATH), $(LIBFT))
# Sources identification
SRC_DIR := src/
SRC_FILES := pushswap.c input.c checkers.c error.c memory.c numbers.c \
				indiv_checkers.c stack_functions.c node_functions.c \
				stack_operations.c stack_special.c operations_pushswap.c \
				operations_rotate.c operations_reverse_rotate.c stack_search.c \
				algo_preparation.c algo_execution.c algo_sort.c 
SRCS = $(addprefix $(SRC_DIR), $(SRC_FILES))
BSRC_DIR := src/bonus/
BSRC_FILES := checker.c
BSRCS := $(addprefix $(BSRC_DIR), $(BSRC_FILES))
# Object identification (not necessary)
#OBJ_DIR := obj/
#OBJS := $(addprefix $(OBJ_DIR), $(SRC_FILES:.c=.o))
#BOBJS := $(addprefix $(OBJ_DIR), $(BSRC_FILES:.c=.o))

all: $(NAME)

$(NAME): $(SRCS) $(LIBFT_FULL)
	$(CC) $(COPTIONS) $(CFLAGS) -o $(NAME) $(SRCS) $(LIBFT_FULL)

bonus: $(BSRCS) $(LIBFT_FULL)
	$(CC) $(COPTIONS) $(CFLAGS) -o $(BONUS_NAME) $(BSRCS) $(SRCS) $(LIBFT_FULL)

$(LIBFT): $(LIBFT_PATH)
	make -C $(LIBFT_PATH) bonus

$(addprefix $(OBJ_DIR), %.o): %.c | $(OBJ_DIR)
	$(CC) $(COPTIONS) $(CFLAGS) $^ -o $@

clean:
	make -C $(LIBFT_PATH) clean

fclean: clean
	rm -f $(NAME)
	rm -f $(BONUS_NAME)
	make -C $(LIBFT_PATH) fclean

re: fclean all

.PHONY: all bonus clean fclean re