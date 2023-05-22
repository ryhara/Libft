/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryhara <ryhara@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 16:42:10 by ryhara            #+#    #+#             */
/*   Updated: 2023/05/22 18:25:36 by ryhara           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	word_count(char *str, char c)
{
	size_t	count;

	count = 0;
	while (*str)
	{
		while (*str == c)
			str++;
		while (*str && *str != c)
			str++;
		count++;
	}
	return (count);
}

size_t	check_start(char *str, char c, size_t i)
{
	while (str[i] == c)
		i++;
	return (i);
}

size_t	check_end(char *str, char c, size_t i)
{
	while (str[i] && str[i] != c)
		i++;
	return (i);
}

char	**do_split(char **arr, char *str, char c, size_t arr_len)
{
	size_t	i;
	size_t	j;
	size_t	start;
	size_t	end;

	i = 0;
	end = 0;
	while (i < arr_len)
	{
		j = 0;
		start = check_start(str, c, end);
		end = check_end(str, c, start);
		arr[i] = (char *)malloc(sizeof(char) * (end - start + 2));
		if (!arr[i])
		{
			while (j < i)
				free(arr[j++]);
			return (NULL);
		}
		while (start < end)
			arr[i][j++] = str[start++];
		arr[i++][j] = '\0';
	}
	arr[i] = NULL;
	return (arr);
}

char	**ft_split(char const *s, char c)
{
	char	**arr;
	char	*str;
	size_t	arr_len;

	str = (char *)s;
	arr_len = word_count(str, c);
	arr = (char **)malloc(sizeof(char *) * (arr_len + 1));
	if (!arr)
		return (NULL);
	if (!do_split(arr, str, c, arr_len))
	{
		free(arr);
		return (NULL);
	}
	return (arr);
}

#include <stdio.h>
int	main(void)
{
	char *str;
	char c;
	char **ans;
	int i;
	int count;

	str = "-hello-world--japan---42-42Tokyo";
	// str = "babaaaaaaaaaaaaaaaa";
	c = '-';
	i = 0;
	count = (word_count(str, c) + 1);
	printf("count : %d\n", count);
	ans = ft_split(str, c);
	printf("%s\n",str);
	while (i < count)
	{
		printf("%d: %s\n", i, ans[i]);
		i++;
	}
}