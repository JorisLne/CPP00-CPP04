# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jlaine <jlaine@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/09 18:11:54 by jorislaine        #+#    #+#              #
#    Updated: 2025/05/14 10:54:56 by jlaine           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= phonebook

SRC_DIR		= srcs
INC_DIR		= includes

SRC_FILES	= main.cpp \
			  PhoneBook.cpp \
			  Contact.cpp

SRC			= $(addprefix $(SRC_DIR)/, $(SRC_FILES))
OBJS		= $(SRC:.cpp=.o)

CXX			= c++
CXXFLAGS	= -Wall -Wextra -Werror -std=c++98 -I$(INC_DIR)

GREEN		= \033[32m
RED			= \033[31m
BLINK		= \033[5m
RESET		= \033[0m

.SILENT:

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)
	@echo "$(GREEN)$(BLINK)$(NAME) created$(RESET)"

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)
	@echo "$(RED)$(BLINK)object files deleted$(RESET)"

fclean: clean
	rm -f $(NAME)
	@echo "$(RED)$(BLINK)$(NAME) deleted$(RESET)"

re: fclean all

.PHONY: all clean fclean re