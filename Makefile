# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pandalaf <pandalaf@student.42wolfsburg.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/30 23:15:27 by pandalaf          #+#    #+#              #
#    Updated: 2022/10/11 20:50:31 by pandalaf         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Target output
NAME := push_swap
BONUS_NAME := checker
# Compiler options
CC := cc
CFLAGS := -Wall -Werror -Wextra
COPTIONS :=
# Libft location
LIBFT := libft.a
LIBFT_PATH := libft/
LIBFT_FULL = $(addprefix $(LIBFT_PATH), $(LIBFT))
# Sources identification
SRC_DIR := src/
SRC_FILES := pushswap.c
SRCS = $(addprefix $(SRC_DIR), $(SRC_FILES))
BSRC_DIR := src/bonus/
BSRC_FILES := checker.c
BSRCS := $(addprefix $(BSRC_DIR), $(BSRC_FILES))
# Object identification (not necessary)
#OBJ_DIR := obj/
#OBJS := $(addprefix $(OBJ_DIR), $(SRC_FILES:.c=.o))
#BOBJS := $(addprefix $(OBJ_DIR), $(BSRC_FILES:.c=.o))

all: $(NAME)

$(NAME): $(SRCS) $(LIBFT)
	$(CC) $(COPTIONS) $(CFLAGS) -o $(NAME) $(SRCS) $(LIBFT_FULL)

bonus: $(BSRCS) $(LIBFT)
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