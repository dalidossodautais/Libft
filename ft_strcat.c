/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddosso-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/18 19:10:53 by ddosso-d          #+#    #+#             */
/*   Updated: 2016/11/18 19:10:55 by ddosso-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *des, const char *src)
{
	size_t	a;
	size_t	b;

	b = 0;
	a = ft_strlen(des);
	while (src[b])
	{
		des[a] = src[b];
		a++;
		b++;
	}
	des[a] = '\0';
	return (des);
}
