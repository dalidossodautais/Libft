/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlereffa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/23 21:28:31 by jlereffa          #+#    #+#             */
/*   Updated: 2016/11/23 21:28:38 by jlereffa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static	void	ft_negative(int *n, int *negative_case)
{
	if (*n < 0)
	{
		*n *= -1;
		*negative_case = 1;
	}
}

char			*ft_itoa(int n)
{
	int		a;
	int		tmp;
	int		negative_case;
	char	*s;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	a = 2;
	tmp = n;
	negative_case = 0;
	ft_negative(&n, &negative_case);
	while (tmp /= 10)
		a++;
	a = a + negative_case;
	if (!(s = (char*)malloc(sizeof(char) * a)))
		return (NULL);
	s[--a] = '\0';
	while (a--)
	{
		s[a] = n % 10 + '0';
		n = n / 10;
	}
	if (negative_case)
		s[0] = '-';
	return (s);
}
