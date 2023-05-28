/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryhara <ryhara@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 14:49:59 by ryhara            #+#    #+#             */
/*   Updated: 2023/05/28 14:47:56 by ryhara           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*subs;
	size_t	i;
	size_t	s_len;

	i = 0;
	if (s == NULL || len == 0)
		return (NULL);
	if (ft_strlen(s) < (size_t)start)
		return (NULL);
	subs = (char *)malloc(sizeof(char) * (len + 1));
	if (!subs)
		return (NULL);
	while (s[start + i] != '\0' && i < len)
	{
		subs[i] = s[start + i];
		i++;
	}
	subs[i] = '\0';
	return (subs);
}

// #include<stdio.h>
// int	main(void)
// {
// 	char	*s1;
// 	s1 = ft_substr("libft-test-tokyo", 0 ,0);
// 	if (s1 == NULL)
// 		printf("null\n");
// 	else
// 		printf("%s\n",s1);
// }