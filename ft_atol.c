/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atol.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddosso-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/26 11:16:30 by ddosso-d          #+#    #+#             */
/*   Updated: 2018/01/26 11:16:33 by ddosso-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long	ft_atol(const char *s)
{
	if (!s)
	{
		ft_error(WRONG_PARAMS);
		return (0);
	}
	s = ft_skipis(s, &ft_isspace);
	return ((long)ft_atoul(s + ft_issign(*s)) * (*s == '-' ? -1 : 1));
}
