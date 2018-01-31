/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddosso-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/24 11:40:52 by ddosso-d          #+#    #+#             */
/*   Updated: 2018/01/24 11:40:53 by ddosso-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *dst, const char *src)
{
	if (!dst || !src)
	{
		ft_error(WRONG_PARAMS);
		return (0);
	}
	ft_strcpy(dst + ft_strlen(dst), src);
	return (dst);
}
