/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryhara <ryhara@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 21:23:39 by ryhara            #+#    #+#             */
/*   Updated: 2023/05/19 21:23:39 by ryhara           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*ans;

	ans = (unsigned char *)s;
	while (n--)
	{
		*ans = (unsigned char)c;
		ans++;
	}
	return (s);
}

// #include <stdio.h>
// #include <string.h>
// int main(void)
// {
// 	char	s1[] = "abcde";
// 	char	s2[] = "abcde";
// 	memset(s1,-50,2);
// 	printf("%s\n",s1);
// 	ft_memset(s2,-50,2);
// 	printf("%s\n",s2);
// }