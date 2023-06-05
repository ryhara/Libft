/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryhara <ryhara@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 14:49:59 by ryhara            #+#    #+#             */
/*   Updated: 2023/06/05 22:47:19 by ryhara           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*subs;
	size_t	tmp_len;

	tmp_len = len;
	if (s == NULL)
		return (NULL);
	if (ft_strlen(s) <= (size_t)start)
		return (ft_calloc(1, 1));
	if (ft_strlen(s + start) < len)
		tmp_len = ft_strlen(s + start);
	subs = (char *)malloc(sizeof(char) * (tmp_len + 1));
	if (!subs)
		return (NULL);
	ft_strlcpy(subs, s + start, tmp_len + 1);
	return (subs);
}

// #include<stdio.h>
// int	main(void)
// {
// 	char	*s1;
// 	s1 = ft_substr("libft-test-tokyo", 0 ,2);
// 	if (s1 == NULL)
// 		printf("null\n");
// 	else
// 		printf("%s\n",s1);
// }