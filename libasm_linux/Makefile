# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ttarumot <ttarumot@student.42tokyo.jp>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/11/28 09:50:40 by ttarumot          #+#    #+#              #
#    Updated: 2020/12/04 04:26:20 by ttarumot         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= ft_strlen.s ft_strcpy.s ft_strcmp.s ft_write.s ft_read.s ft_strdup.s
OBJS	= $(SRCS:.s=.o)
FLAGS	= -Wall -Werror -Wextra
NAME	= libasm.a

%.o: %.s
	nasm -felf64 $<

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME) test

re: fclean $(NAME)

test: $(NAME)
	gcc -no-pie main.c -o test -L. -lasm
	./test

.PHONY: all clean fclean re test