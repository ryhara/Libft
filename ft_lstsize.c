/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryhara <ryhara@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/03 11:16:54 by ryhara            #+#    #+#             */
/*   Updated: 2023/06/03 11:16:54 by ryhara           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	count;

	count = 0;
	if (lst == NULL)
		return (0);
	while (lst)
	{
		lst = lst->next;
		count++;
	}
	return (count);
}

// #include <stdio.h>

// int main(void)
// {
// 	t_list *lst = ft_lstnew("0");
// 	ft_lstadd_front(&lst, ft_lstnew("1"));
// 	ft_lstadd_front(&lst, ft_lstnew("2"));
// 	// t_list *lst;
// 	// lst = NULL;
// 	printf("%d\n",ft_lstsize(lst));
// }