/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddosso-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/30 19:42:40 by ddosso-d          #+#    #+#             */
/*   Updated: 2016/11/30 19:42:42 by ddosso-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int		ft_words(const char *s, char c)
{
	int		a;
	int		separations;

	a = 0;
	separations = 0;
	while (*s != '\0')
	{
		if (separations == 1 && *s == c)
			separations = 0;
		if (separations == 0 && *s != c)
		{
			separations = 1;
			a++;
		}
		s++;
	}
	return (a);
}

static int		ft_length(const char *s, char c)
{
	int		n;

	n = 0;
	while (*s != c && *s != '\0')
	{
		n++;
		s++;
	}
	return (n);
}

char			**ft_strsplit(char const *s, char c)
{
	int		a;
	int		nw;
	char	**tab;

	if (!s)
		return (NULL);
	a = 0;
	nw = ft_words((const char *)s, c);
	tab = (char **)malloc(sizeof(*tab) * (nw + 1));
	if (tab == NULL)
		return (NULL);
	while (nw--)
	{
		while (*s == c && *s != '\0')
			s++;
		tab[a] = ft_strsub((const char *)s, 0, ft_length((const char *)s, c));
		if (tab[a] == NULL)
			return (NULL);
		s = s + ft_length(s, c);
		a++;
	}
	tab[a] = NULL;
	return (tab);
}
