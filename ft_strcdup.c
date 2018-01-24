/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcdup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddosso-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/30 04:37:40 by ddosso-d          #+#    #+#             */
/*   Updated: 2016/11/30 04:37:45 by ddosso-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <string.h>

char	*ft_strcdup(const char *s, size_t c)
{
	char	*des;
	size_t	a;

	a = 0;
	while (s[a] && s[a] != c)
		a++;
	if (!(des = (char *)malloc(sizeof(*s) * (a + 1))))
		return (0);
	a = 0;
	while (s[a] && s[a] != c)
	{
		des[a] = s[a];
		a++;
	}
	des[a] = '\0';
	return (des);
}
