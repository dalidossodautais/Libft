/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddosso-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/29 11:09:05 by ddosso-d          #+#    #+#             */
/*   Updated: 2018/01/29 11:09:07 by ddosso-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int nb)
{
	size_t	i;
	char	*str;

	if (!(str = ft_strnew(ft_ilen(nb))))
		return (NULL);
	if (nb < 0)
		str[0] = '-';
	i = ft_ilen(nb);
	while (i-- && (nb >= 10 || nb <= -10))
	{
		str[i] = ft_absolute(nb % 10) + '0';
		nb /= 10;
	}
	str[i] = ft_absolute(nb) + '0';
	return (str);
}
