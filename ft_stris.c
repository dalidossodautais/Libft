/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stris.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddosso-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/26 14:14:13 by ddosso-d          #+#    #+#             */
/*   Updated: 2018/01/26 14:14:15 by ddosso-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_stris(const char *s, int (*f)(int))
{
	if (!s)
	{
		ft_error(WRONG_PARAMS);
		return (0);
	}
	while (*s && f(*s))
		++s;
	return (!*s);
}
