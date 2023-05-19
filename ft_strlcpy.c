/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryhara <ryhara@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 15:27:49 by ryhara            #+#    #+#             */
/*   Updated: 2023/05/19 15:27:49 by ryhara           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size == 0)
		return (ft_strlen(src));
	while (i < (size - 1) && src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(src));
}

// #include<stdio.h>
// #include<string.h>

// int	main(void)
// {
// 	char *s1 = NULL;
// 	char *s2 = "ABC";
// 	char *s3 = NULL;
// 	char	*s4 ="ABC";
// 	printf("%s %d\n",s1,strlcpy(s1,s2,2));
// 	// printf("%s %ld\n",s1,ft_strlcpy(s1,s2,sizeof(s1)));
// 	printf("%s %ld\n",s3,ft_strlcpy(s3,s4,1));
// }