/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddosso-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/20 10:55:38 by ddosso-d          #+#    #+#             */
/*   Updated: 2016/11/20 10:55:41 by ddosso-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(const char *s1, const char *s2)
{
	int		a;

	a = 0;
	while (((unsigned char *)s1)[a] || ((unsigned char *)s2)[a])
	{
		if (((unsigned char *)s1)[a] != ((unsigned char *)s2)[a])
			return (((unsigned char *)s1)[a] - ((unsigned char *)s2)[a]);
		else
			a++;
	}
	return (0);
}
