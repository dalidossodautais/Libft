/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddosso-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/27 05:28:01 by ddosso-d          #+#    #+#             */
/*   Updated: 2016/11/27 05:28:03 by ddosso-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memmove(void *des, void *src, size_t len)
{
	size_t		a;

	a = 0;
	if (des > src)
		while (len-- > 0)
			((char *)des)[len] = ((char *)src)[len];
	else
		while (a < len)
		{
			((char *)des)[a] = ((char *)src)[a];
			a++;
		}
	return (des);
}
