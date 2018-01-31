/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddosso-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/24 11:46:56 by ddosso-d          #+#    #+#             */
/*   Updated: 2018/01/24 11:46:57 by ddosso-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	if (!str)
	{
		ft_error(WRONG_PARAMS);
		return (0);
	}
	while (*str && *str != c)
		++str;
	return (*str == c ? (char *)str : NULL);
}
