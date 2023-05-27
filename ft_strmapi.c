/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryhara <ryhara@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 15:23:46 by ryhara            #+#    #+#             */
/*   Updated: 2023/05/27 15:23:46 by ryhara           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include<stdio.h>
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	len;
	size_t	i;
	char	*ans;

	i = 0;
	if (s == NULL || f == NULL)
		return (NULL);
	len = ft_strlen(s);
	ans = (char *)malloc(sizeof(char) * (len + 1));
	if (!ans)
		return (NULL);
	while (i < len)
	{
		ans[i] = f(i, s[i]);
		i++;
	}
	ans[i] = '\0';
	return (ans);
}

// char test(unsigned int i, char c)
// {
// 	c++;
// 	return (c);
// }

// // #include<stdio.h>
// int	main(void)
// {
// 	char s1[]="abcd";
// 	char *s2;
// 	printf("%s\n",s1);
// 	s2 = ft_strmapi(s1, test);
// 	printf("%s\n",s2);
// 	free(s2);
// }
