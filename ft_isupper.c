/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddosso-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/30 19:39:48 by ddosso-d          #+#    #+#             */
/*   Updated: 2016/11/30 19:39:50 by ddosso-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_isupper(int a)
{
	if (a >= 'A' && a <= 'Z')
		return (1);
	return (0);
}
