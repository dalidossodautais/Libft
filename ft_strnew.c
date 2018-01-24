/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddosso-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 15:58:55 by ddosso-d          #+#    #+#             */
/*   Updated: 2016/11/07 15:58:57 by ddosso-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>

char	*ft_strnew(size_t size)
{
	char	*str;
	size_t	a;

	a = 0;
	if (!(str = (char *)malloc(sizeof(*str) * (size + 1))))
		return (0);
	while (a <= size)
	{
		str[a] = '\0';
		a++;
	}
	return (str);
}
