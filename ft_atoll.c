/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoll.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddosso-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/26 11:16:38 by ddosso-d          #+#    #+#             */
/*   Updated: 2018/01/26 11:16:39 by ddosso-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long long	ft_atoll(const char *s)
{
	if (!s)
	{
		ft_error(WRONG_PARAMS);
		return (0);
	}
	s = ft_skipis(s, &ft_isspace);
	return ((long long)ft_atoull(s + ft_issign(*s)) * (*s == '-' ? -1 : 1));
}
