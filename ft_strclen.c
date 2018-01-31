/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclen.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddosso-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/29 11:58:13 by ddosso-d          #+#    #+#             */
/*   Updated: 2018/01/29 11:58:17 by ddosso-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strclen(const char *str, int c)
{
	size_t	len;

	if (!str)
	{
		ft_error(WRONG_PARAMS);
		return (0);
	}
	len = 0;
	while (str[len] && str[len] != c)
		++len;
	return (len);
}
