# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jlaine <jlaine@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/19 17:15:03 by jlaine            #+#    #+#              #
#    Updated: 2025/05/19 17:29:48 by jlaine           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.SILENT:

NAME	= brain
SRC		= main.cpp
OBJ		= main.o

CXX		= c++
FLAGS	= -Wall -Wextra -Werror -std=c++98

GREEN	= \033[32m
RED		= \033[31m
BLINK	= \033[5m
RESET	= \033[0m

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