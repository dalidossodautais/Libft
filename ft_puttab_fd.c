/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puttab_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddosso-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/28 15:02:19 by ddosso-d          #+#    #+#             */
/*   Updated: 2016/11/28 15:03:05 by ddosso-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_puttab_fd(char **tab, int fd)
{
	int a;
	int b;

	a = 0;
	while (tab[a])
	{
		b = 0;
		while (tab[a][b])
			ft_putchar_fd(tab[a][b++], fd);
		ft_putchar_fd('\n', fd);
		a++;
	}
}
