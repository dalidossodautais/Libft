/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nbword.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddosso-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/29 11:36:07 by ddosso-d          #+#    #+#             */
/*   Updated: 2018/01/29 11:36:08 by ddosso-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_nbword(const char *str, int c)
{
	size_t	nb;

	if (!str)
	{
		ft_error(WRONG_PARAMS);
		return (0);
	}
	nb = 0;
	while ((str = ft_skipchar(str, c)) && *str)
		(str = ft_skipbchar(str, c)) && ++nb;
	return (nb);
}
