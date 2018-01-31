/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddosso-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/24 15:27:27 by ddosso-d          #+#    #+#             */
/*   Updated: 2018/01/24 15:27:28 by ddosso-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	if (!src)
	{
		ft_error(WRONG_PARAMS);
		return (0);
	}
	return (ft_strcpy(ft_strnew(ft_strlen(src)), src));
}
