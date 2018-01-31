/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtolower.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddosso-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/25 18:46:52 by ddosso-d          #+#    #+#             */
/*   Updated: 2018/01/25 18:46:54 by ddosso-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtolower(const char *s)
{
	char	*t;
	char	*n;

	if (!s)
	{
		ft_error(WRONG_PARAMS);
		return (NULL);
	}
	n = ft_strnew(ft_strlen(s) + 1);
	t = n;
	while (*s)
		*n = (char)ft_islower(*((char *)s)) && ++s && ++n;
	return (t);
}
