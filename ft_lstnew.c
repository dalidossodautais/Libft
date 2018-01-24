/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddosso-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/28 20:32:44 by ddosso-d          #+#    #+#             */
/*   Updated: 2016/11/28 20:32:46 by ddosso-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list		*lst;

	if (!(lst = (t_list*)malloc(sizeof(t_list))))
		return (NULL);
	if (!content)
	{
		lst->content = NULL;
		lst->content_size = 0;
		lst->next = NULL;
		return (lst);
	}
	if (!(lst->content = malloc(sizeof(content) * content_size)))
		return (NULL);
	ft_memcpy(lst->content, content, content_size);
	lst->content_size = content_size;
	lst->next = NULL;
	return (lst);
}
