/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddosso-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/24 14:13:04 by ddosso-d          #+#    #+#             */
/*   Updated: 2018/01/24 14:13:05 by ddosso-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *mdf, const char *aig)
{
	size_t	i;

	if (!mdf || !aig)
	{
		ft_error(WRONG_PARAMS);
		return (0);
	}
	if (!*aig)
		return ((char *)mdf);
	while (*mdf)
	{
		i = 0;
		while (mdf[i] && aig[i] && mdf[i] == aig[i])
			++i;
		if (!aig[i])
			return ((char *)mdf);
		++mdf;
	}
	return (0);
}
