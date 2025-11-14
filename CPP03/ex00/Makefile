# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jlaine <jlaine@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/27 17:13:50 by jlaine            #+#    #+#              #
#    Updated: 2025/05/27 17:14:14 by jlaine           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.SILENT:

NAME		= ClapTrap

SRC_DIR		= srcs
INC_DIR		= include

SRC_FILES	= main.cpp ClapTrap.cpp
SRC			= $(addprefix $(SRC_DIR)/, $(SRC_FILES))
OBJS		= $(SRC:$(SRC_DIR)/%.cpp=$(SRC_DIR)/%.o)

CXX			= c++
FLAGS		= -Wall -Wextra -Werror -std=c++98
INC			= -I $(INC_DIR)

GREEN		= \033[32m
RED			= \033[31m
BLINK		= \033[5m
RESET		= \033[0m

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(FLAGS) $(INC) $(OBJS) -o $(NAME)
	@echo "$(GREEN)$(BLINK)$(NAME) created$(RESET)"

$(SRC_DIR)/%.o: $(SRC_DIR)/%.cpp
	$(CXX) $(FLAGS) $(INC) -c $< -o $@

clean:
	rm -f $(OBJS)
	@echo "$(RED)$(BLINK)object files deleted$(RESET)"

fclean: clean
	rm -f $(NAME)
	@echo "$(RED)$(BLINK)$(NAME) deleted$(RESET)"

re: fclean all

.PHONY: all clean fclean re