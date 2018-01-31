/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoxl.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddosso-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/26 11:16:59 by ddosso-d          #+#    #+#             */
/*   Updated: 2018/01/26 11:17:01 by ddosso-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long	ft_atoxl(const char *s)
{
	if (!s)
	{
		ft_error(WRONG_PARAMS);
		return (0);
	}
	s = ft_skipis(s, &ft_isspace);
	return ((long)ft_atoxul(s + ft_issign(*s) + 2) * (*s == '-' ? -1 : 1));
}
