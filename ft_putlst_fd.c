/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putlst_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddosso-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/30 02:50:21 by ddosso-d          #+#    #+#             */
/*   Updated: 2016/11/30 02:50:24 by ddosso-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putlst_fd(t_list *lst, int fd)
{
	t_list	*tmp;

	if (!lst)
		return ;
	tmp = lst;
	while (tmp->next)
	{
		ft_putchar_fd('(', fd);
		ft_putstr_fd((char *)tmp->content, fd);
		ft_putstr_fd(") --> ", fd);
		tmp = tmp->next;
	}
	ft_putchar_fd('(', fd);
	ft_putstr_fd((char *)tmp->content, fd);
	ft_putstr_fd(")", fd);
}
