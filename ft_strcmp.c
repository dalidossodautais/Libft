/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddosso-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/24 14:14:33 by ddosso-d          #+#    #+#             */
/*   Updated: 2018/01/24 14:14:34 by ddosso-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strcmp(const char *s1, const char *s2)
{
	if (!s1 || !s2)
	{
		ft_error(WRONG_PARAMS);
		return (0);
	}
	while (ft_isnnsame(*(unsigned char *)s1, *(unsigned char *)s2))
		++s1 && ++s2;
	return (*(unsigned char *)s1 - *(unsigned char *)s2);
}
