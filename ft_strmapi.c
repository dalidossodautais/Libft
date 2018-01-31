/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddosso-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/24 14:50:07 by ddosso-d          #+#    #+#             */
/*   Updated: 2018/01/24 14:50:09 by ddosso-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(const char *str, char (*f)(unsigned int, char))
{
	char	*new;
	size_t	i;

	if (!str)
	{
		ft_error(WRONG_PARAMS);
		return (0);
	}
	if (!(new = ft_strnew(ft_strlen(str))))
		return (0);
	i = 0;
	while (str[i])
	{
		(new[i] = f(i, str[i]));
		++i;
	}
	return (new);
}
