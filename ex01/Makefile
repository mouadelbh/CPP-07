# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mel-bouh <mel-bouh@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/20 15:04:17 by mel-bouh          #+#    #+#              #
#    Updated: 2025/04/21 11:17:06 by mel-bouh         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = main.cpp
FLAGS = -Wall -Wextra -Werror #-std=c++98
HEADER = iter.hpp
NAME = iter

all: $(NAME)

$(NAME): $(SRC) $(HEADER)
	c++ $(SRC) -o $(NAME)
clean:
	rm -f *.o
fclean:
	rm -f $(NAME)
re : fclean all

.PHONY: all clean fclean re
