/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecaudal <jecaudal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/27 15:47:26 by jecaudal          #+#    #+#             */
/*   Updated: 2020/02/29 16:32:53 by jecaudal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libasm.h"
#include <stdio.h>
#include <string.h>
#include <unistd.h>

#define TOP "##############################################\n"
#define MID_L "#-----------------"
#define MID_R "------------------#\n"

/* ft_strlen
** printf("len of [%s] = %d", argv[1], ft_strlen(argv[1]));
*/

/* ft_strcmp
** printf("s1 = [%s] & s2 = [%s]\n", argv[1], argv[2]);
** printf("return of libc = [%d]\n", strcmp(argv[1], argv[2]));
** printf("return of ft   = [%d]\n", ft_strcmp(argv[1], argv[2]));
*/

/*
** char buf[500] = "salut les amis c'est david";
** char buf2[500] = "salut les amis c'est david";
** printf("str = [%s]\n", argv[1]);
** printf("return of libc = [%s]\n", strcpy(buf, argv[1]));
** printf("return of ft   = [%s]\n", ft_strcpy(buf2, argv[1]));
*/

/* ft_write
** int n_libc;
** int n_ft;
** printf("to write is [%s], on fd = [%d], and [%d] bytes\n", argv[2], atoi(argv[1]), atoi(argv[3]));
** printf("write of write is [");
** fflush(stdout);
** n_libc = write(atoi(argv[1]), argv[2], atoi(argv[3]));
** printf("[%d]", n_libc);
** fflush(stdout);
** write(1, "]\n", 2);
** printf("res of ft_write  [");
** fflush(stdout);
** n_ft = ft_write(atoi(argv[1]), argv[2], atoi(argv[3]));
** printf("[%d]", n_ft);
** fflush(stdout);
** write(1, "]\n", 2);
*/

/* ft_strdup
** printf("Input = [%s]\n", argv[1]);
** printf("libc  = [%s]\n", strdup(argv[1]));
** printf("ft_   = [%s]\n", ft_strdup(argv[1]));
** return (0);
*/

/* ft_read
** int		n_libc;
** int		n_ft;
** char	buf[100];
** char	buf2[100];
** printf("read on fd = [%d], and [%d] bytes\n", atoi(argv[1]), atoi(argv[2]));
** printf("ret of write is [");
** fflush(stdout);
** n_libc = read(atoi(argv[1]), buf, atoi(argv[2]));
** if (n_libc >= 0)
** 	buf[n_libc - 1] = '\0';
** printf("%s[%d]]\n", buf, n_libc);
** printf("res of ft_write  [");
** n_ft = ft_read(atoi(argv[1]), buf2, atoi(argv[2]));
** if (n_ft >= 0)
** 	buf2[n_ft - 1] = '\0';
** printf("%s[%d]]\n", buf2, n_ft);
*/

int		main(int argc, char **argv)
{
	char	buf_senten[] = "coucou                      ";
	char	buf_2_senten[] = "coucou                     ";
	char	buf_big_senten[] = "Salut a tous les amis c'est david lafarge";
	char	buf_2_big_senten[] = "Salut a tous les amis c'est david lafarge";
	char	*truc = "Hey ";
	char	*fdp = "HEY ";

	printf("%s%sft_strlen%s%s\n", TOP, MID_L, MID_R, TOP);
	printf("int	ft_strlen(char *str);\n\n");
	printf("For str = \"\"\n");
	printf("libc = %lu\n", strlen(""));
	printf("ft_  = %d\n", ft_strlen(""));
	printf("\n");
	printf("For str = \"a\"\n");
	printf("libc = %lu\n", strlen("a"));
	printf("ft_  = %d\n", ft_strlen("a"));
	printf("\n");
	printf("For str = \"Hey comment il vas celui ci ?\"\n");
	printf("libc = %lu\n", strlen("Hey comment il vas celui ci ?"));
	printf("ft_  = %d\n", ft_strlen("Hey comment il vas celui ci ?"));
	printf("\n");
	printf("%s%sft_strcpy%s%s\n", TOP, MID_L, MID_R, TOP);
	printf("char	*ft_strcpy(char *dst, char *src);\n\n");
	printf("For dst = [100] = \"coucou\", src = \"Ils sont chiants\"\n");
	printf("libc = [%s]\n", strcpy(buf_senten, "Ils sont chiants"));
	printf("ft_  = [%s]\n", ft_strcpy(buf_2_senten, "Ils sont chiants"));
	printf("\n");
	printf("For dst = [100] = \"Salut a tous les amis c'est david lafarge\";, src = \"souris\"\n");
	printf("libc = [%s]\n", strcpy(buf_big_senten, "souris"));
	printf("ft_  = [%s]\n", ft_strcpy(buf_2_big_senten, "souris"));
	printf("\n");
	printf("%s%sft_strcmp%s%s\n", TOP, MID_L, MID_R, TOP);
	printf("int	ft_strcmp(char *s1, char *s1);\n\n");
	printf("For s1 = \"coucou\", s2 = \"coucoux\"\n");
	printf("libc = [%d]\n", strcmp("coucou", "coucoux"));
	// printf("ft_  = [%d]\n", ft_strcmp(truc, fdp));
	printf("%s%sft_strdup%s%s\n", TOP, MID_L, MID_R, TOP);
	printf("%s%s ft_read %s%s\n", TOP, MID_L, MID_R, TOP);
	printf("%s%sft_write %s%s\n", TOP, MID_L, MID_R, TOP);
	return (0);
}
