# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jlaine <jlaine@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/17 18:01:19 by jlaine            #+#    #+#              #
#    Updated: 2025/05/17 18:12:43 by jlaine           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.SILENT:

NAME        = zombie
SRC_DIR     = srcs
OBJ_DIR     = srcs
SRC_FILES   = main.cpp newZombie.cpp randomChump.cpp Zombie.cpp
SRC         = $(addprefix $(SRC_DIR)/, $(SRC_FILES))
OBJS        = $(SRC:$(SRC_DIR)/%.cpp=$(OBJ_DIR)/%.o)

CXX         = c++
CXXFLAGS    = -Wall -Wextra -Werror -std=c++98
INCS        = -I include

GREEN       = \033[32m
RED         = \033[31m
BLINK       = \033[5m
RESET       = \033[0m

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(INCS) $(OBJS) -o $(NAME)
	@echo "$(GREEN)$(BLINK)$(NAME) created$(RESET)"

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp
	$(CXX) $(CXXFLAGS) $(INCS) -c $< -o $@

clean:
	rm -f $(OBJS)
	@echo "$(RED)object files deleted$(RESET)"

fclean: clean
	rm -f $(NAME)
	@echo "$(RED)$(NAME) deleted$(RESET)"

re: fclean all

.PHONY: all clean fclean re
