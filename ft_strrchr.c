/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddosso-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/24 11:46:37 by ddosso-d          #+#    #+#             */
/*   Updated: 2018/01/24 11:46:38 by ddosso-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	size_t	i;

	if (!str)
	{
		ft_error(WRONG_PARAMS);
		return (0);
	}
	i = ft_strlen(str) + 1;
	while (i && str[--i] != c)
		;
	return (str[i] == c ? (char *)str + i : 0);
}
