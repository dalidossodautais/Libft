/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit_blank.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddosso-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/28 20:36:56 by ddosso-d          #+#    #+#             */
/*   Updated: 2016/11/28 20:36:58 by ddosso-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int	ft_size(char *str)
{
	int		a;
	int		b;

	a = 0;
	b = 0;
	while ((str[a] == 9 || str[a] == 13 || str[a] == 32) && str[a])
		a++;
	if (str[a] != 9 && str[a] != 13 && str[a] != 32 && str[a])
		b++;
	while (str[a])
	{
		if (str[a] != 9 && str[a] != 13 && str[a] != 32 &&
			(str[a - 1] == 9 || str[a - 1] == 13 || str[a - 1] == 32))
			b++;
		a++;
	}
	b++;
	return (b);
}

static int	ft_malloc(char *str, char **tab, int a, int c)
{
	int		b;
	int		d;

	d = 0;
	while (str[d] != '\0')
		d++;
	b = a;
	tab[c] = (char*)malloc(sizeof(char) * d);
	while (str[a] != 9 && str[a] != 13 && str[a] != 32 && str[a])
	{
		tab[c][a - b] = str[a];
		a++;
	}
	tab[c][a - b] = '\0';
	return (a);
}

char		**ft_strsplit_blank(char *str)
{
	char	**tab;
	int		a;
	int		b;
	int		c;

	a = 0;
	b = 0;
	c = 0;
	while (str[b])
		b++;
	tab = (char**)malloc(sizeof(char*) * (ft_size(str)));
	while (a < b)
	{
		if (str[a] != 9 && str[a] != 13 && str[a] != 32 && str[a]
			&& (str[a - 1] == 9 || str[a - 1] == 13 || str[a - 1] == 32
				|| a == 0))
			a = ft_malloc(str, tab, a, c++);
		else
			a++;
	}
	tab[c] = 0;
	return (tab);
}
