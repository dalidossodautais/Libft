/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_skipchar.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddosso-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/29 11:44:45 by ddosso-d          #+#    #+#             */
/*   Updated: 2018/01/29 11:44:46 by ddosso-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_skipchar(const char *str, int c)
{
	if (!str)
	{
		ft_error(WRONG_PARAMS);
		return (NULL);
	}
	while (*str && *str == c)
		++str;
	return ((char *)str);
}
