/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryhara <ryhara@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 09:57:26 by ryhara            #+#    #+#             */
/*   Updated: 2023/05/20 09:57:26 by ryhara           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*tmp_d;
	unsigned char	*tmp_s;

	tmp_d = (unsigned char *)dest;
	tmp_s = (unsigned char *)src;
	if (dest == NULL && src == NULL)
		return (NULL);
	while (n--)
	{
		*tmp_d = *tmp_s;
		tmp_d++;
		tmp_s++;
	}
	return (dest);
}

// #include <stdio.h>
// #include <string.h>

// int main(void)
// {
// 	char str[] = "abcdefghijklmnopqrstu";
// 	printf("移動前：%s\n",str);
// 	memmove(str, str+8, 10);        /* 重複エリアのコピー */
// 	printf("移動後：%s\n",str);

// 	char str2[] = "abcdefghijklmnopqrstu";
// 	printf("移動前：%s\n",str2);
// 	memmove(str2, str2+8, 10);        /* 重複エリアのコピー */
// 	printf("移動後：%s\n",str2);
// 	return 0;
// }