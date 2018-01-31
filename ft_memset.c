/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddosso-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/25 17:43:00 by ddosso-d          #+#    #+#             */
/*   Updated: 2018/01/25 17:43:02 by ddosso-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *mem, int c, size_t n)
{
	if (!mem)
	{
		ft_error(WRONG_PARAMS);
		return (0);
	}
	while (n--)
		((unsigned char *)mem)[n] = (unsigned char)c;
	return (mem);
}
