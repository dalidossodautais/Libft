/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoxi.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddosso-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/26 11:17:07 by ddosso-d          #+#    #+#             */
/*   Updated: 2018/01/26 11:17:09 by ddosso-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoxi(const char *s)
{
	if (!s)
	{
		ft_error(WRONG_PARAMS);
		return (0);
	}
	s = ft_skipis(s, &ft_isspace);
	return ((int)ft_atoxui(s + ft_issign(*s) + 2) * (*s == '-' ? -1 : 1));
}
