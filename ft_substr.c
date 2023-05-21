/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryhara <ryhara@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 14:49:59 by ryhara            #+#    #+#             */
/*   Updated: 2023/05/21 16:10:45 by ryhara           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	char *subs;
	size_t	subs_len;
	size_t	i;

	i = 0;
	subs_len = len + 1;
	subs = (char *)malloc(sizeof(char) * subs_len);
	if (!subs)
		return (NULL);
	while (i < subs_len)
	{
		subs[i] = s[start + i];
		i++;
	}
	return(subs);
}

// #include<stdio.h>
// int	main(void)
// {
// 	char *s1;
// 	s1 = ft_substr("abcdefghijk",5 ,3);
// 	printf("%s\n",s1);
// }