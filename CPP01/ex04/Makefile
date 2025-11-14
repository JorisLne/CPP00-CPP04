# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jlaine <jlaine@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/20 15:32:39 by jlaine            #+#    #+#              #
#    Updated: 2025/05/20 16:39:12 by jlaine           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.SILENT:

NAME		= replace
SRC			= main.cpp
OBJ			= main.o

CXX			= c++
FLAGS		= -Wall -Wextra -Werror -std=c++98

GREEN		= \033[32m
RED			= \033[31m
BLINK		= \033[5m
RESET		= \033[0m

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(FLAGS) $(OBJ) -o $(NAME)
	@echo "$(GREEN)$(BLINK)$(NAME) created$(RESET)"

%.o: %.cpp
	$(CXX) $(FLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)
	@echo "$(RED)$(BLINK)object file deleted$(RESET)"

fclean: clean
	rm -f $(NAME)
	@echo "$(RED)$(BLINK)$(NAME) deleted$(RESET)"

re: fclean all

.PHONY: all clean fclean re