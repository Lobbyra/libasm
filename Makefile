# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jecaudal <jecaudal@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/02/27 15:44:05 by jecaudal          #+#    #+#              #
#    Updated: 2020/02/29 13:49:45 by jecaudal         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	libasm.a

NAME_TEST	=	exec_tests

SRCS		=	ft_read.s	\
				ft_write.s	\
				ft_strcpy.s	\
				ft_strlen.s	\
				ft_strcmp.s	\
				ft_strdup.s

PATH_SRCS	=	./srcs

OBJS		=	$(SRCS:.s=.o)

ASM			=	nasm

ASFLAGS		+=	-fmacho64

%.o			:	%.s
			$(ASM) $(ASFLAGS) $< -o $@

all			:
				@make $(NAME)

$(NAME)		:	$(OBJS)
				ar -r $(NAME) $(OBJS)
				ranlib $(NAME)

clean		:
				rm -f $(OBJS)

fclean		:	clean
				rm -f $(NAME) $(NAME_TEST)

re			:	fclean all

test		:	re
				gcc -o $(NAME_TEST) -Wall -Werror -Wextra main.c -L. -lasm
				rm -f $(OBJS)
