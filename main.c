/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecaudal <jecaudal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/27 15:47:26 by jecaudal          #+#    #+#             */
/*   Updated: 2020/02/28 16:17:49 by jecaudal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libasm.h"
#include <stdio.h>
#include <string.h>
#include <unistd.h>

int		main(int argc, char **argv)
{
	/* ft_strlen
		printf("len of [%s] = %d", argv[1], ft_strlen(argv[1]));
	*/

	/* ft_strcmp
	printf("s1 = [%s] & s2 = [%s]\n", argv[1], argv[2]);
	printf("return of libc = [%d]\n", strcmp(argv[1], argv[2]));
	printf("return of ft   = [%d]\n", ft_strcmp(argv[1], argv[2]));
	*/

	/*
	char buf[500] = "salut les amis c'est david";
	char buf2[500] = "salut les amis c'est david";
	printf("str = [%s]\n", argv[1]);
	printf("return of libc = [%s]\n", strcpy(buf, argv[1]));
	printf("return of ft   = [%s]\n", ft_strcpy(buf2, argv[1]));
	*/

	/* ft_write
	int n_libc;
	int n_ft;
	printf("to write is [%s], on fd = [%d], and [%d] bytes\n", argv[2], atoi(argv[1]), atoi(argv[3]));
	printf("write of write is [");
	fflush(stdout);
	n_libc = write(atoi(argv[1]), argv[2], atoi(argv[3]));
	printf("[%d]", n_libc);
	fflush(stdout);
	write(1, "]\n", 2);
	printf("res of ft_write  [");
	fflush(stdout);
	n_ft = ft_write(atoi(argv[1]), argv[2], atoi(argv[3]));
	printf("[%d]", n_ft);
	fflush(stdout);
	write(1, "]\n", 2);
	*/
	printf("Input = [%s]\n", argv[1]);
	printf("libc  = [%s]\n", strdup(argv[1]));
	printf("ft_   = [%s]\n", ft_strdup(argv[1]));
	return (0);
}
