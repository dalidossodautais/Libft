/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_skipbchar.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddosso-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/29 11:52:17 by ddosso-d          #+#    #+#             */
/*   Updated: 2018/01/29 11:52:18 by ddosso-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_skipbchar(const char *str, int c)
{
	if (!str)
	{
		ft_error(WRONG_PARAMS);
		return (NULL);
	}
	while (*str && *str != c)
		++str;
	return ((char *)str);
}
