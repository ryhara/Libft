/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryhara <ryhara@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 15:03:13 by ryhara            #+#    #+#             */
/*   Updated: 2023/05/28 14:24:36 by ryhara           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*ans;
	char	*tmp_s1;
	size_t	i;
	size_t	tail;

	if (s1 == NULL || set == NULL)
		return (NULL);
	tmp_s1 = (char *)s1;
	i = 0;
	while (tmp_s1[i] != '\0' && ft_strchr(set, tmp_s1[i]))
		i++;
	tail = ft_strlen(tmp_s1);
	while (tail > i && ft_strchr(set, tmp_s1[tail - 1]))
		tail--;
	ans = (char *)malloc(sizeof(char) * (tail - i + 1));
	if (!ans)
		return (NULL);
	ft_strlcpy(ans, &tmp_s1[i], (tail - i + 1));
	return (ans);
}

// #include <stdio.h>
// int	main(void)
// {
// 	printf("%s\n",ft_strtrim("",""));
// }