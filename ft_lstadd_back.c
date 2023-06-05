/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryhara <ryhara@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/03 11:40:04 by ryhara            #+#    #+#             */
/*   Updated: 2023/06/03 11:40:04 by ryhara           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*lst_elem;

	lst_elem = *lst;
	if (lst == NULL || new == NULL)
		return ;
	while (lst_elem -> next)
		lst_elem = lst_elem -> next;
	lst_elem -> next = new;
	new -> next = NULL;
}

// #include <stdio.h>

// int main(void)
// {
// 	t_list *lst = ft_lstnew("0");
// 	ft_lstadd_back(&lst, ft_lstnew("1"));
// 	while (lst)
// 	{
// 		printf("%s\n",(char *)lst->content);
// 		lst = lst->next;
// 	}
// }