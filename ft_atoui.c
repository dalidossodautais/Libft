/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoui.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddosso-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/26 11:13:04 by ddosso-d          #+#    #+#             */
/*   Updated: 2018/01/26 11:13:06 by ddosso-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned	ft_atoui(const char *s)
{
	unsigned	nb;

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
