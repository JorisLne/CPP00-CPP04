# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jlaine <jlaine@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/19 11:19:11 by jlaine            #+#    #+#              #
#    Updated: 2025/05/19 14:54:48 by jlaine           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.SILENT:

NAME		= zombieHorde

SRC_DIR		= srcs
OBJ_DIR		= srcs

SRC_FILES	= main.cpp Zombie.cpp zombieHorde.cpp
SRC			= $(addprefix $(SRC_DIR)/, $(SRC_FILES))
OBJS		= $(SRC:$(SRC_DIR)/%.cpp=$(OBJ_DIR)/%.o)

CXX			= c++
FLAGS		= -Wall -Wextra -Werror -std=c++98
INC			= -I include

GREEN		= \033[32m
RED			= \033[31m
BLINK		= \033[5m
RESET		= \033[0m

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(FLAGS) $(INC) $(OBJS) -o $(NAME)
	@echo "$(GREEN)$(BLINK)$(NAME) created$(RESET)"

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp
	$(CXX) $(CXXFLAGS) $(INCS) -c $< -o $@

clean:
	rm -f $(OBJS)
	@echo "$(RED)$(BLINK)object files deleted$(RESET)"

fclean: clean
	rm -f $(NAME)
	@echo "$(RED)$(BLINK)$(NAME) deleted$(RESET)"

re: fclean all

.PHONY: all clean fclean re
