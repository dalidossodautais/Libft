/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddosso-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/20 11:05:38 by ddosso-d          #+#    #+#             */
/*   Updated: 2016/11/20 11:05:39 by ddosso-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strncpy(char *des, const char *src, size_t n)
{
	size_t	a;

	a = 0;
	while (a < n && src[a])
	{
		des[a] = src[a];
		a++;
	}
	while (a < n)
	{
		des[a] = 0;
		a++;
	}
	return (des);
}
