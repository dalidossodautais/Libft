/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tabtostr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddosso-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/29 10:41:56 by ddosso-d          #+#    #+#             */
/*   Updated: 2016/11/29 10:42:00 by ddosso-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static char	*ft_result(int argc, char **argv, int c)
{
	char	*str;
	int		a;
	int		b;

	str = (char*)malloc(sizeof(char) * (c + argc));
	a = 1;
	c = 0;
	while (a < argc)
	{
		b = 0;
		while (argv[a][b])
		{
			str[c] = argv[a][b];
			b++;
			c++;
		}
		if (a < argc - 1)
			str[c] = '\n';
		a++;
		c++;
	}
	str[c - 1] = '\0';
	return (str);
}

char		*ft_tabtostr(int argc, char **argv)
{
	int		a;
	int		b;
	int		c;

	a = 1;
	c = 0;
	while (a < argc)
	{
		b = 0;
		while (argv[a][b++])
			c++;
		a++;
	}
	return (ft_result(argc, argv, c));
}
