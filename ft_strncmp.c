/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddosso-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/20 10:58:36 by ddosso-d          #+#    #+#             */
/*   Updated: 2016/11/20 10:59:17 by ddosso-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t a;

	a = 0;
	while (((unsigned char *)s1)[a] || ((unsigned char *)s2)[a])
	{
		if (a == n)
			return (0);
		else if (((unsigned char *)s1)[a] != ((unsigned char *)s2)[a])
			return (((unsigned char *)s1)[a] - ((unsigned char *)s2)[a]);
		a++;
	}
	return (((unsigned char *)s1)[a] - ((unsigned char *)s2)[a]);
}
