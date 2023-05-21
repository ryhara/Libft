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
	char	*ans;

	pos = (char *)s;
	ans = NULL;
	if (s == NULL)
		return (NULL);
	if ((char)c == '\0')
		return ((pos + ft_strlen(s)));
	while (*pos)
	{
		if (*pos == (char)c)
			ans = pos;
		pos++;
	}
	return (ans);
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