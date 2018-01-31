/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddosso-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/24 14:14:38 by ddosso-d          #+#    #+#             */
/*   Updated: 2018/01/24 14:14:41 by ddosso-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	if (!s1 || !s2)
	{
		ft_error(WRONG_PARAMS);
		return (0);
	}
	while (n && ft_isnnsame(*(unsigned char *)s1, *(unsigned char *)s2))
		++s1 && ++s2 && --n;
	return (n ? *(unsigned char *)s1 - *(unsigned char *)s2 : 0);
}
