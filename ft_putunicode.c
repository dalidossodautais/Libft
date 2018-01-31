/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunicode.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddosso-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/25 17:33:41 by ddosso-d          #+#    #+#             */
/*   Updated: 2018/01/25 17:33:42 by ddosso-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putunicode(int c)
{
	char	tmp[4];

	if (MB_CUR_MAX == 1 || !(c >> 7))
		write(1, &c, 1);
	else if (MB_CUR_MAX == 2 || !(c >> 11))
	{
		tmp[0] = (c >> 6) | 0xC0;
		tmp[1] = (c << 26 >> 26) | 0x80;
		write(1, tmp, 2);
	}
	else if (MB_CUR_MAX == 3 || !(c >> 16))
	{
		tmp[0] = (c >> 12) | 0xE0;
		tmp[1] = (c << 20 >> 26) | 0x80;
		tmp[2] = (c << 26 >> 26) | 0x80;
		write(1, tmp, 3);
	}
	else
	{
		tmp[0] = (c >> 18) | 0xF0;
		tmp[1] = (c << 14 >> 26) | 0x80;
		tmp[2] = (c << 20 >> 26) | 0x80;
		tmp[3] = (c << 26 >> 26) | 0x80;
		write(1, tmp, 4);
	}
}
