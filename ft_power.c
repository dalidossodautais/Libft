/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_power.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddosso-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/13 13:07:59 by ddosso-d          #+#    #+#             */
/*   Updated: 2016/08/16 18:06:42 by ddosso-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_power(int nb, int power)
{
	if (power > 0)
	{
		power--;
		return (nb) * ft_power(nb, power);
	}
	else if (power == 0)
		return (1);
	else
		return (0);
}