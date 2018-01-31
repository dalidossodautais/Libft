/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoul.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddosso-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/26 11:00:50 by ddosso-d          #+#    #+#             */
/*   Updated: 2018/01/26 11:00:51 by ddosso-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned long	ft_atoul(const char *s)
{
	unsigned long	nb;

	if (!s)
	{
		ft_error(WRONG_PARAMS);
		return (0);
	}
	nb = 0;
	while (ft_isdigit(*s))
	{
		nb = nb * 10 + *s - '0';
		++s;
	}
	return (nb);
}
