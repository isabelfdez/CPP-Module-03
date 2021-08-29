# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: user42 <user42@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/17 13:34:04 by user42            #+#    #+#              #
#    Updated: 2021/08/29 21:04:03 by user42           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS 	= main.cpp	ClapTrap.cpp	ScravTrap.cpp	FragTrap.cpp

OBJS 	= $(SRCS:.cpp=.o)

FLAGS	= -Wall -Werror -Wextra

NAME	= FragTrap

all:		$(NAME)

$(NAME):	$(OBJS)
			-@clang++ $(FLAGS) -o $(NAME) $(OBJS)

clean:
			-@rm -f $(OBJS)

fclean: 	clean
			-@rm -f $(NAME)

re:	fclean all

.PHONY: all clea fclean re