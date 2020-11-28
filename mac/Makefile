# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ttarumot <ttarumot@student.42tokyo.jp>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/11/28 09:50:40 by ttarumot          #+#    #+#              #
#    Updated: 2020/11/28 10:02:13 by ttarumot         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= ft_strlen.s
OBJS	= $(SRCS:.s=.o)
FLAGS	= -Wall -Werror -Wextra
NAME	= libasm.a

%.o: %.s
	nasm -f macho64 $<

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

clean:
	rm -rf $(OBJS) *.o

fclean: clean
	rm -rf $(NAME) test

re: fclean $(NAME)

test: $(NAME)
	gcc $(FLAGS) -L. -lasm -o test main.c
	./test

.PHONY: all clean fclean re test