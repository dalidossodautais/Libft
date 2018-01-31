/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoull.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddosso-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/26 11:00:54 by ddosso-d          #+#    #+#             */
/*   Updated: 2018/01/26 11:00:55 by ddosso-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned long long	ft_atoull(const char *s)
{
	unsigned long long	nb;

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
