/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddosso-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/28 20:30:16 by ddosso-d          #+#    #+#             */
/*   Updated: 2016/11/28 20:30:17 by ddosso-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *des, const char *src, size_t size)
{
	size_t	a;
	size_t	b;

	a = 0;
	b = 0;
	while (des[a])
		a++;
	if (size <= a)
		return (size + ft_strlen(src));
	while (a + b < size - 1 && src[b])
	{
		des[a + b] = src[b];
		b++;
	}
	des[a + b] = '\0';
	return (a + ft_strlen(src));
}
