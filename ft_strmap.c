/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddosso-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/24 14:50:03 by ddosso-d          #+#    #+#             */
/*   Updated: 2018/01/24 14:50:04 by ddosso-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *str, char (*f)(char))
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
		(new[i] = f(str[i]));
		++i;
	}
	new[i] = '\0';
	return (new);
}
