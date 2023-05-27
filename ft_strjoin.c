/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryhara <ryhara@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 14:38:10 by ryhara            #+#    #+#             */
/*   Updated: 2023/05/27 15:20:51 by ryhara           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ans;
	size_t	len;

	len = ft_strlen(s1) + ft_strlen(s2) + 1;
	ans = (char *)malloc(sizeof(char) * len);
	if (!ans)
		return (NULL);
	ft_bzero(ans, len);
	ft_strlcat(ans, s1, sizeof(ans));
	ft_strlcat(ans, s2, sizeof(ans));
	return (ans);
}

// #include<stdio.h>
// int main(void)
// {
// 	printf("%s\n",ft_strjoin("ab","AB"));
// }
