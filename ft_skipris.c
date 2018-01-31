/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_skipris.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddosso-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/26 14:14:01 by ddosso-d          #+#    #+#             */
/*   Updated: 2018/01/26 14:14:02 by ddosso-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_skipris(const char *s, int (*f)(int))
{
	size_t	i;

	if (!s)
	{
		ft_error(WRONG_PARAMS);
		return (NULL);
	}
	i = ft_bigger(ft_strlen(s), 1) - 1;
	while (i && f(s[i]))
		--i;
	return ((char *)s + i);
}
