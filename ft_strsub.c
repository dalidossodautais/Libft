/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddosso-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/24 15:04:13 by ddosso-d          #+#    #+#             */
/*   Updated: 2018/01/24 15:04:16 by ddosso-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(const char *str, unsigned int start, size_t len)
{
	char	*new;
	size_t	i;

	if (!str)
	{
		ft_error(WRONG_PARAMS);
		return (0);
	}
	if (!(new = ft_strnew(len)))
		return (0);
	i = 0;
	while (str[start + i] && i < len)
		(new[i] = str[start + i]) && ++i;
	new[i] = '\0';
	return (new);
}
