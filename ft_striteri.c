/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryhara <ryhara@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 15:48:47 by ryhara            #+#    #+#             */
/*   Updated: 2023/05/27 15:48:47 by ryhara           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t	i;

	i = 0;
	if (s == NULL || f == NULL)
		return ;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
	return ;
}

// void test(unsigned int i, char *c)
// {
// 	(*c)++;
// 	return ;
// }

// #include<stdio.h>
// int	main(void)
// {
// 	char s1[]="abcd";
// 	char *s2;
// 	printf("%s\n",s1);
// 	ft_striteri(s1, test);
// 	printf("%s\n",s1);
// }
