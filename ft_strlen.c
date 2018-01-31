/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddosso-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/24 16:29:11 by ddosso-d          #+#    #+#             */
/*   Updated: 2018/01/24 16:29:12 by ddosso-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	size_t	len;

	if (!str)
	{
		ft_error(WRONG_PARAMS);
		return (0);
	}
	len = 0;
	while (str[len])
		++len;
	return (len);
}
