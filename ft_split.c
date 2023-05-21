/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryhara <ryhara@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 16:42:10 by ryhara            #+#    #+#             */
/*   Updated: 2023/05/21 17:21:42 by ryhara           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	word_count(char *str, char c)
{
	int	count;

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

int	check_start(char *str, char c, int i)
{
	while (str[i] == c)
		i++;
	return (i);
}

int	check_end(char *str, char c, int i)
{
	while (str[i] != c)
		i++;
	return (i);
}

void	do_split(char **arr, char *str, char c, int arr_len)
{
	int	i;
	int	j;
	int	start;
	int	end;

	i = 0;
	end = 0;
	while (i < arr_len)
	{
		j = 0;
		start = check_start(str, c, end);
		end = check_end(str, c, start);
		arr[i] = (char *)malloc(sizeof(char) * (end - start + 2));
		if (end >= start)
		{
			while (start <= end)
				arr[i][j++] = str[start++];
			arr[i][j] = '\0';
			i++;
		}
	}
	arr[i] = NULL;
}

char	**ft_split(char const *s, char c)
{
	char	**arr;
	char	*str;
	int		arr_len;

	str = (char *)s;
	arr_len = word_count(str, c);
	arr = (char **)malloc(sizeof(char *) * (arr_len + 1));
	do_split(arr, str, c, arr_len);
	return (arr);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char *str;
// 	char c;
// 	char **ans;
// 	int i;
// 	int count;

// 	str = " hello world  japan   42 42Tokyo";
// 	c = ' ';
// 	i = 0;
// 	count = (word_count(str, c) + 1);
// 	printf("count : %d\n", count);
// 	ans = ft_split(str, c);
// 	while (i < count)
// 	{
// 		printf("%d: %s\n", i, ans[i]);
// 		i++;
// 	}
// }