/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddosso-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/27 05:35:16 by ddosso-d          #+#    #+#             */
/*   Updated: 2016/11/27 05:35:18 by ddosso-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memccpy(void *des, const void *src, int c, size_t n)
{
	size_t a;

	a = 0;
	while (a < n)
	{
		*((char *)des + a) = *((char *)src + a);
		if (*((char *)src + a) == (char)c)
			return ((char *)des + a + 1);
		a++;
	}
	return (NULL);
}
