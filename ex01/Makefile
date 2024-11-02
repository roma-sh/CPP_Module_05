# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rshatra <rshatra@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/31 23:22:45 by rshatra           #+#    #+#              #
#    Updated: 2024/11/02 03:06:10 by rshatra          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = BurForm
CFLAGS = -g -Wall -Werror -Wextra
CC = g++

SRCS = main.cpp Bureaucrat.cpp Form.cpp

OBJ = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ)

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean all
