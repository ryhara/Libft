/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryhara <ryhara@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 09:21:37 by ryhara            #+#    #+#             */
/*   Updated: 2023/05/21 13:38:44 by ryhara           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*ans;

	i = 0;
	ans = (unsigned char *)s;
	if (s == NULL)
		return (NULL);
	while (i < n)
	{
		if (*ans == (unsigned char)c)
			return (ans);
		ans++;
		i++;
	}
	return (NULL);
}

// #include <string.h>
// #include <stdio.h>
// int main(void)
// {
// 	printf("%s\n", memchr("abcde",'c',4));
// 	printf("%s\n", ft_memchr("abcde",'c',4));
// }