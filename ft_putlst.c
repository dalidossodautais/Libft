/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putlst.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddosso-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/30 02:44:04 by ddosso-d          #+#    #+#             */
/*   Updated: 2016/11/30 02:44:06 by ddosso-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putlst(t_list *lst)
{
	t_list	*tmp;

	if (!lst)
		return ;
	tmp = lst;
	while (tmp->next)
	{
		ft_putchar('(');
		ft_putstr((char *)tmp->content);
		ft_putstr(") --> ");
		tmp = tmp->next;
	}
	ft_putchar('(');
	ft_putstr((char *)tmp->content);
	ft_putstr(")");
}
