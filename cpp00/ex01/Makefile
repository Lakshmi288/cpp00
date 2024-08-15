# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lps <lps@student.42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/13 22:19:06 by babonnet          #+#    #+#              #
#    Updated: 2024/08/15 17:46:37 by lps              ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := PhoneBook
CC := g++
CFLAGS := -std=c++98 -Wall -Wextra -Werror -g
SRC_DIR := src
HSRCS := include
OBJ_DIR := obj

SRC := Contact.cpp \
	action/exit.cpp \
	action/add.cpp \
	action/search.cpp \
	PhoneBook.cpp \

OBJS := $(patsubst %.cpp,$(OBJ_DIR)/%.o,$(SRC))


all: $(NAME)

$(NAME): $(OBJS)
	@echo "$(GREEN)Linking $(NAME)...$(NC)"
	@$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp
	@mkdir -p $(@D)
	@echo "$(YELLOW)Compiling $(notdir $<)...$(NC)"
	@$(CC) $(CFLAGS) -I $(HSRCS) -o $@ -c $<

clean:
	@echo "$(RED)Cleaning object files...$(NC)"
	@rm -rf $(OBJ_DIR)

fclean: clean
	@echo "$(RED)Cleaning executable $(NAME)...$(NC)"
	@rm -rf $(NAME)

re: fclean all

.PHONY: all avx2 clean fclean re
