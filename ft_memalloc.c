/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddosso-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/27 05:19:37 by ddosso-d          #+#    #+#             */
/*   Updated: 2016/11/27 05:19:43 by ddosso-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>

void	*ft_memalloc(size_t len)
{
	void	*a;

	a = (void *)malloc(sizeof(a) * len);
	if (a)
		while (len-- > 0)
			((char *)a)[len] = 0;
	return (a);
}
