/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddosso-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/26 13:55:01 by ddosso-d          #+#    #+#             */
/*   Updated: 2018/01/26 13:55:03 by ddosso-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(const char *str)
{
	if (!str)
	{
		ft_error(WRONG_PARAMS);
		return (0);
	}
	if (ft_skipris(str, &ft_iseblank) - ft_skipis(str, &ft_iseblank) >= 0)
		return (ft_strndup(ft_skipis(str, &ft_iseblank),
			ft_skipris(str, &ft_iseblank) - ft_skipis(str, &ft_iseblank) + 1));
	return (ft_strdup(""));
}
