/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddosso-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/18 12:20:21 by ddosso-d          #+#    #+#             */
/*   Updated: 2016/11/18 12:20:27 by ddosso-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		a;
	char	*c;

	if (!s1 || !s2)
		return (NULL);
	a = ft_strlen(s1) + ft_strlen(s2) + 1;
	c = (char *)malloc(sizeof(*c) * a);
	if (!c)
		return (NULL);
	ft_strcpy(c, (char *)s1);
	ft_strcat(c, (char *)s2);
	return (c);
}
