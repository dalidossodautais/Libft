/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddosso-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/18 18:29:27 by ddosso-d          #+#    #+#             */
/*   Updated: 2016/11/18 18:29:30 by ddosso-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	a;
	size_t	b;
	size_t	c;

	if (s1[0] == '\0' && s2[0] == '\0')
		return (&((char *)s1)[0]);
	a = 0;
	while (s1[a] && a < n)
	{
		b = 0;
		c = a;
		while ((s1[a] == s2[b] && a < n) || !s2[b])
		{
			if (!s2[b])
				return (&((char *)s1)[c]);
			a++;
			b++;
		}
		a = c;
		a++;
	}
	return (NULL);
}
