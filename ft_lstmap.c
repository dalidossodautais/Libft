/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddosso-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/29 13:08:18 by ddosso-d          #+#    #+#             */
/*   Updated: 2018/01/29 13:08:20 by ddosso-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list		*new;
	t_list		*tmp;

	if (!lst || !f)
	{
		ft_error(WRONG_PARAMS);
		return (0);
	}
	new = ft_lstnew(f(lst)->content, f(lst)->content_size);
	tmp = new;
	while (lst->next)
	{
		new->next = ft_lstnew(f(lst->next)->content,
			f(lst->next)->content_size);
		new = new->next;
		lst = lst->next;
	}
	new->next = 0;
	return (tmp);
}
