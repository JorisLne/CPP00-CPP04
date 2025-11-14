# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jlaine <jlaine@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/14 17:46:54 by jlaine            #+#    #+#              #
#    Updated: 2025/05/14 18:11:13 by jlaine           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME        = missing_file

SRC_DIR     = srcs
INC_DIR     = include

SRC_FILES   = Account.cpp tests.cpp
SRC         = $(addprefix $(SRC_DIR)/, $(SRC_FILES))
OBJ         = $(SRC:.cpp=.o)

CXX         = c++
CXXFLAGS    = -Wall -Wextra -Werror -std=c++98 -I$(INC_DIR)

GREEN       = \033[32m
RED         = \033[31m
BLINK       = \033[5m
RESET       = \033[0m

.SILENT:

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)
	@echo "$(GREEN)$(BLINK)$(NAME) created$(RESET)"

$(SRC_DIR)/%.o: $(SRC_DIR)/%.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)
	@echo "$(RED)$(BLINK)object files deleted$(RESET)"

fclean: clean
	rm -f $(NAME)
	@echo "$(RED)$(BLINK)$(NAME) deleted$(RESET)"

re: fclean all

.PHONY: all clean fclean re