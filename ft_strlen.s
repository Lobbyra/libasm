# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ft_strlen.s                                        :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jecaudal <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/02/27 16:04:04 by jecaudal          #+#    #+#              #
#    Updated: 2020/02/27 16:55:37 by jecaudal         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

			global		_ft_strlen
			section		.text
_ft_strlen:	
			mov			rax, 0
			jmp			process

process:
			cmp			BYTE [rdi], 0		;	Comparaison
			je			exit		;	if rdi == 0
			inc			rdi			;	else incrementation de rdi
			inc			rax			;	else incrementation de rdi
			jmp			process

exit:		ret
