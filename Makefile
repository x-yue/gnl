#
# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yuxu <marvin@42.fr>                        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/12/02 03:41:02 by yuxu              #+#    #+#              #
#    Updated: 2018/04/02 00:26:48 by yuxu             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = gnl
SRCS = get_next_line.c
FLAGS = -fsanitize=address -Wall -Werror -Wextra -g
OBJS = get_next_line.o

all: $(NAME)

$(NAME):
	clang -c $(FLAGS) $(SRCS)
	clang -g -fsanitize=address main.c -o $(NAME) $(OBJS) libft/libft.a

clean:
	/bin/rm -f $(OBJS)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
