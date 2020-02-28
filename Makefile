# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jecaudal <jecaudal@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/02/27 15:44:05 by jecaudal          #+#    #+#              #
#    Updated: 2020/02/27 15:46:33 by jecaudal         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	libclobb.a

SRCS		=	ft_read.s	\
				ft_write	\
				ft_strcpy.s	\
				ft_strlen.s	\
				ft_strdup.s

PATH_SRCS	=	./srcs

OBJS		=	$(SRCS:.s=.o)

cc			=	gcc

CFLAGS		+=	-Wall -Wextra -Werror -I headers -I srcs/print/l_printf/headers

all			:
				@make $(NAME)

$(NAME)		:	$(OBJS)
				ar -r $(NAME) $(OBJS)
				ranlib $(NAME)

clean		:
				rm $(OBJS)

fclean		:	clean
				rm $(NAME)

re			:	fclean all
