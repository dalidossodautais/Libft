/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddosso-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/18 12:19:40 by ddosso-d          #+#    #+#             */
/*   Updated: 2016/11/18 12:19:56 by ddosso-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	a;

	if (s)
	{
		str = (char *)malloc(sizeof(*str) * (len + 1));
		if (!str)
			return (NULL);
		a = 0;
		while (s[start] && a < len)
		{
			str[a] = s[start];
			a++;
			start++;
		}
		str[a] = '\0';
		return (str);
	}
	return (0);
}
