/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddosso-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/18 11:24:54 by ddosso-d          #+#    #+#             */
/*   Updated: 2016/11/18 11:24:58 by ddosso-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <string.h>

static char	*ft_strtrim2(char const *s, size_t a, size_t b)
{
	char	*str;

	str = (char *)malloc(sizeof(*str) * (b - a + 1));
	if (!str)
		return (NULL);
	a = 0;
	b = 0;
	while (b < ft_strlen(s))
	{
		if (!a && (s[b] == ' ' || s[b] == '\t' || s[b] == '\n'))
			b++;
		else
			str[a++] = s[b++];
	}
	a--;
	while (str[a] == ' ' || str[a] == '\t' || str[a] == '\n')
		a--;
	str[a + 1] = '\0';
	return (str);
}

char		*ft_strtrim(char const *s)
{
	char	*str;
	size_t	a;
	size_t	b;

	if (!s)
		return (NULL);
	a = 0;
	b = 0;
	while (s[a] == ' ' || s[a] == '\n' || s[a] == '\t')
		a++;
	if (s[a] == '\0')
	{
		str = (char *)malloc(sizeof(*str));
		str[0] = '\0';
		return (str);
	}
	while (s[b])
		b++;
	while (s[b - 1] == ' ' || s[b - 1] == '\n' || s[b - 1] == '\t')
		b--;
	return (ft_strtrim2(s, a, b));
}
