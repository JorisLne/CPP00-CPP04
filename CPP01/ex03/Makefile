# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jlaine <jlaine@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/19 17:35:50 by jlaine            #+#    #+#              #
#    Updated: 2025/05/20 13:56:25 by jlaine           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.SILENT:

NAME        = weapon
SRC_DIR     = srcs
OBJ_DIR     = srcs
INC_DIR     = includes
SRC_FILES   = main.cpp Weapon.cpp HumanA.cpp HumanB.cpp
SRC         = $(addprefix $(SRC_DIR)/, $(SRC_FILES))
OBJS        = $(SRC:$(SRC_DIR)/%.cpp=$(OBJ_DIR)/%.o)

CXX         = c++
CXXFLAGS    = -Wall -Wextra -Werror -std=c++98 -I $(INC_DIR)

GREEN       = \033[32m
RED         = \033[31m
BLINK       = \033[5m
RESET       = \033[0m

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)
	@echo "$(GREEN)$(BLINK)$(NAME) created$(RESET)"

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)
	@echo "$(RED)$(BLINK)object files deleted$(RESET)"

fclean: clean
	rm -f $(NAME)
	@echo "$(RED)$(BLINK)$(NAME) deleted$(RESET)"

re: fclean all

.PHONY: all clean fclean re
