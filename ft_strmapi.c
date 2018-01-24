/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddosso-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 15:58:55 by ddosso-d          #+#    #+#             */
/*   Updated: 2016/11/07 15:58:57 by ddosso-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		a;
	char	*str;

	if (s && f)
	{
		a = ft_strlen(s);
		str = (char *)malloc(sizeof(*s) * (a + 1));
		if (str)
		{
			a = -1;
			while (s[++a])
				str[a] = f(a, s[a]);
			str[a] = '\0';
			return (str);
		}
	}
	return (0);
}
