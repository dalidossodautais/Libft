/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddosso-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/29 15:15:52 by ddosso-d          #+#    #+#             */
/*   Updated: 2018/01/29 15:15:54 by ddosso-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstdup(t_list *lst)
{
	t_list	*new;
	t_list	*tmp;

	if (!lst || !(new = ft_lstnew(lst->content, lst->content_size)))
		return (NULL);
	tmp = new;
	while (lst->next)
	{
		if (!(new->next = ft_lstnew(lst->content, lst->content_size)))
			return (NULL);
		lst = lst->next;
		new = new->next;
	}
	new->next = NULL;
	return (tmp);
}
