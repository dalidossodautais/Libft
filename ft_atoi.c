/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddosso-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/25 19:07:24 by ddosso-d          #+#    #+#             */
/*   Updated: 2018/01/25 19:07:27 by ddosso-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *s)
{
	if (!s)
	{
		ft_error(WRONG_PARAMS);
		return (0);
	}
	s = ft_skipis(s, &ft_isspace);
	return (ft_atoui(s + ft_issign(*s)) * (*s == '-' ? -1 : 1));
}
