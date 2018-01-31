/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtoupper.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddosso-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/26 11:04:32 by ddosso-d          #+#    #+#             */
/*   Updated: 2018/01/26 11:04:34 by ddosso-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtoupper(const char *s)
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
		*n = (char)ft_isupper(*((char *)s)) && ++s && ++n;
	return (t);
}
