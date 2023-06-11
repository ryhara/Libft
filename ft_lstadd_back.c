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
	t_list	*last;

	if (lst == NULL || new == NULL)
		return ;
	if (*lst == NULL)
		*lst = new;
	else
	{
		last = ft_lstlast(*lst);
		last -> next = new;
	}
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