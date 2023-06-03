/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryhara <ryhara@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/03 11:26:14 by ryhara            #+#    #+#             */
/*   Updated: 2023/06/03 11:26:14 by ryhara           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (lst == NULL)
		return (NULL);
	while (lst -> next)
		lst = lst -> next;
	return (lst);
}

// #include <stdio.h>

// int main(void)
// {
// 	t_list *lst = ft_lstnew("0");
// 	ft_lstadd_front(&lst, ft_lstnew("1"));
// 	ft_lstadd_front(&lst, ft_lstnew("2"));
// 	t_list	*lst2 = ft_lstlast(lst);
// 	printf("%s\n",(char *)lst2->content);
// }