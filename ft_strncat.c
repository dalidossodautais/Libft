/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddosso-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/18 18:58:02 by ddosso-d          #+#    #+#             */
/*   Updated: 2016/11/18 18:58:06 by ddosso-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char	*ft_strncat(char *des, const char *src, size_t n)
{
	size_t	a;
	size_t	b;

	b = 0;
	a = ft_strlen(des);
	while (src[b] && b < n)
	{
		des[a] = src[b];
		a++;
		b++;
	}
	des[a] = '\0';
	return (des);
}
