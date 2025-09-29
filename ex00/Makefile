# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mcaro-ro <mcaro-ro@student.42madrid.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/09/26 18:18:52 by mcaro-ro          #+#    #+#              #
#    Updated: 2025/09/26 18:33:20 by mcaro-ro         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone

# Colors
GREEN   = \033[0;32m
YELLOW  = \033[0;33m
RESET   = \033[0m

CXX = c++
FLAGS	=	-Wall -Werror -Wextra  -std=c++98 #-g -fsanitize=address

SRC	=	src/megaphone.cpp

OBJS	=	$(SRC:.cpp=.o)

$(NAME): $(OBJS)
	@$(CXX) $(FLAGS) -o $(NAME) $(OBJS)

all: $(NAME)

clean:
	@echo "$(YELLOW)$(NAME): Cleaning object files...$(RESET)"
	@rm -f $(OBJS)
	@echo "$(GREEN)$(NAME): All objects have been cleaned!$(RESET)"

fclean: clean
	@echo "$(YELLOW)$(NAME): Cleaning all files...$(RESET)"
	@rm -f $(NAME)
	@echo "$(GREEN)$(NAME): All files have been cleaned!$(RESET)"

re: fclean all

.DEFAULT_GOAL := all
.PHONY: all clean fclean re
