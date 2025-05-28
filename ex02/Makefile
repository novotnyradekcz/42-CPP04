# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rnovotny <rnovotny@student.42prague.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/11 16:53:34 by rnovotny          #+#    #+#              #
#    Updated: 2025/05/28 16:28:25 by rnovotny         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = abstract
CC = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98
SRCS = main.cpp \
		AAnimal.cpp \
		Dog.cpp \
		Cat.cpp \
		Brain.cpp
OBJS = $(SRCS:.cpp=.o)
RM = rm -f

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CPPFLAGS) -o $@ $^

%.o: %.cpp
	$(CC) $(CPPFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re