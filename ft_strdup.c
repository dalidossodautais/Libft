/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddosso-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 16:37:50 by ddosso-d          #+#    #+#             */
/*   Updated: 2016/11/10 14:10:07 by ddosso-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *s)
{
	char	*des;
	int		a;

	if (!(des = (char *)malloc(sizeof(*s) * (ft_strlen(s) + 1))))
		return (0);
	a = -1;
	while (s[++a])
		des[a] = s[a];
	des[a] = '\0';
	return (des);
}
