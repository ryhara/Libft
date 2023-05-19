/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryhara <ryhara@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 16:34:45 by ryhara            #+#    #+#             */
/*   Updated: 2023/05/19 16:34:45 by ryhara           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*pos;

	pos = NULL;
	if (c == '\0')
		return ((char *)(s + ft_strlen(s)));
	while (*s)
	{
		if (*s == c)
			pos = (char *)s;
		s++;
	}
	if (pos == NULL)
		return (NULL);
	return (pos);
}

// #include<stdio.h>
// #include <string.h>
// int main(void)
// {
// 	char *s1 = "abcdeab";
// 	printf("%p\n", strrchr(s1,'b'));
// 	printf("%p\n", ft_strrchr(s1,'b'));
// 	printf("%p\n", s1+6);
// }