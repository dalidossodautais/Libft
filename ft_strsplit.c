/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddosso-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/29 11:27:21 by ddosso-d          #+#    #+#             */
/*   Updated: 2018/01/29 11:27:23 by ddosso-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_strsplit(const char *str, char c)
{
	char	**aa;
	size_t	i;

	if (!str)
	{
		ft_error(WRONG_PARAMS);
		return (NULL);
	}
	if (!(aa = ft_memalloc(sizeof(aa) * (ft_nbword(str, c) + 1))))
		return (NULL);
	i = 0;
	while (*(str = ft_skipchar(str, c)))
	{
		if (!(aa[i] = ft_strndup(str, ft_strclen(str, c))))
			return (NULL);
		(str += ft_strclen(str, c)) && ++i;
	}
	aa[i] = NULL;
	return (aa);
}
