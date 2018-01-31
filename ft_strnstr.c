/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddosso-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/24 14:12:59 by ddosso-d          #+#    #+#             */
/*   Updated: 2018/01/24 14:13:00 by ddosso-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	if (!s1 || !s2)
	{
		ft_error(WRONG_PARAMS);
		return (0);
	}
	while (n-- && *s1)
	{
		i = 0;
		while (i <= n && s1[i] && s2[i] && s1[i] == s2[i])
			++i;
		if (!s2[i])
			return ((char *)s1);
		++s1;
	}
	return (0);
}
