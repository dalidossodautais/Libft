/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strldup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddosso-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/24 15:27:18 by ddosso-d          #+#    #+#             */
/*   Updated: 2018/01/24 15:27:19 by ddosso-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strldup(const char *src, size_t n)
{
	return (ft_strncpy(ft_strnew((ft_strlen(src) < n ? n :
		ft_strlen(src)) + 1), src, n));
}
