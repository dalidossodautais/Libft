/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddosso-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/30 19:38:40 by ddosso-d          #+#    #+#             */
/*   Updated: 2016/11/30 19:38:41 by ddosso-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <string.h>

char	*ft_strndup(const char *s, size_t n)
{
	char	*des;
	size_t	a;

	a = 0;
	while (s[a] && a < n)
		a++;
	if (!(des = (char *)malloc(sizeof(*s) * (a + 1))))
		return (0);
	a = 0;
	while (s[a] && a < n)
	{
		des[a] = s[a];
		a++;
	}
	des[a] = '\0';
	return (des);
}
