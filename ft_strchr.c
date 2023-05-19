/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryhara <ryhara@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 16:34:39 by ryhara            #+#    #+#             */
/*   Updated: 2023/05/19 16:34:39 by ryhara           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	if (c == '\0')
		return ((char *)(s + ft_strlen(s)));
	while (*s)
	{
		if (*s == c)
			return ((char *)s);
		s++;
	}
	return (NULL);
}

// #include<stdio.h>
// #include <string.h>
// int main(void)
// {
// 	char *s1 = "abcdeab";
// 	printf("%p\n", strchr(s1,'b'));
// 	printf("%p\n", ft_strchr(s1,'b'));
// 	printf("%p\n", s1+1);
// }