/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryhara <ryhara@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 16:42:10 by ryhara            #+#    #+#             */
/*   Updated: 2023/05/30 22:51:36 by ryhara           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	word_count(char *str, char c)
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

static void	free_all(char **array, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		free(array[i]);
		i++;
	}
	free(array);
}

static char	**do_split(char **array, char *str, char c)
{
	size_t	i;
	size_t	j;

	j = 0;
	while (*str)
	{
		while (*str == c)
			str++;
		i = 0;
		while (str[i] && str[i] != c)
			i++;
		array[j] = (char *)malloc(sizeof(char) * (i + 1));
		if (!array[j])
		{
			free_all(array, j);
			return (NULL);
		}
		ft_strlcpy(array[j++], str, (i + 1));
		str += i;
	}
	array[j] = NULL;
	return (array);
}

char	**ft_split(char const *s, char c)
{
	char	**array;
	char	*str;
	size_t	arr_len;

	str = (char *)s;
	arr_len = word_count(str, c);
	array = (char **)malloc(sizeof(char *) * (arr_len + 1));
	if (!array)
		return (NULL);
	if (!do_split(array, str, c))
		return (NULL);
	return (array);
}

// #include <stdio.h>
// int	main(void)
// {
// 	char *str;
// 	char c;
// 	char **ans;
// 	int i;
// 	int count;

// 	str = "-hello-world--japan---42-42Tokyo";
// 	// str = "babaaaaaaaaaaaaaaaa";
// 	c = '-';
// 	i = 0;
// 	count = (word_count(str, c) + 1);
// 	printf("count : %d\n", count);
// 	ans = ft_split(str, c);
// 	printf("%s\n",str);
// 	while (i < count)
// 	{
// 		printf("%d: %s\n", i, ans[i]);
// 		i++;
// 	}
// }