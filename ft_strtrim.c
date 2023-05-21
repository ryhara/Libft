/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryhara <ryhara@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 15:03:13 by ryhara            #+#    #+#             */
/*   Updated: 2023/05/21 17:23:54 by ryhara           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char *ans;
	char	*head;
	char	*tail;
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	head = (char *)s1;
	tail = (char *)s1 + ft_strlen(s1) - 1;
	while (set[i])
	{
		if (ft_strchr(head, set[i]))
		{
			head++;
			i = 0;
		}
		i++;
	}
	while (set[i])
	{
		if (ft_strrchr(head, set[i]))
		{
			i = 0;
			count++;
		}
		i++;
	}
	ans = ft_substr(head, 0, (ft_strlen(head) - count));
	return (ans);
}

// #include <stdio.h>
// int	main(void)
// {
// 	printf("%s\n",ft_strtrim("hello world", "world"));
// }