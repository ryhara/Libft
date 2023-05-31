/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryhara <ryhara@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 10:12:14 by ryhara            #+#    #+#             */
/*   Updated: 2023/05/31 10:12:14 by ryhara           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst == NULL || new == NULL)
		return ;
	new->next = *lst;
	*lst = new;
}

// #include <stdio.h>

// int main(void)
// {
// 	t_list *lst = ft_lstnew("0");
// 	ft_lstadd_front(&lst, ft_lstnew("1"));
// 	while (lst->next)
// 	{
// 		printf("%s\n",(char *)lst->content);
// 		lst = lst->next;
// 	}
// }