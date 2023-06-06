/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryhara <ryhara@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 22:04:23 by ryhara            #+#    #+#             */
/*   Updated: 2023/06/05 22:04:23 by ryhara           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*head;
	t_list	*new_list;
	t_list	*new_head;

	if (lst == NULL || f == NULL || del == NULL)
		return (NULL);
	head = lst;
	new_head = ft_lstnew(f(lst->content));
	if (!new_head)
		return (NULL);
	lst = lst->next;
	while (lst)
	{
		new_list = ft_lstnew(f(lst->content));
		if (!new_list)
		{
			ft_lstclear(&head, del);
			ft_lstclear(&new_head, del);
			return (NULL);
		}
		ft_lstadd_back(new_head, new_list);
	}
	ft_lstclear(&head, del);
	return (new_head);
}
