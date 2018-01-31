/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoxul.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddosso-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/26 11:01:17 by ddosso-d          #+#    #+#             */
/*   Updated: 2018/01/26 11:01:19 by ddosso-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned long	ft_atoxul(const char *s)
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
		nb = nb * 10 + (ft_isdigit(*s) ? *s - '0' : ft_islower(*s) - 0x21);
		++s;
	}
	return (nb);
}
