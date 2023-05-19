/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryhara <ryhara@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 09:11:13 by ryhara            #+#    #+#             */
/*   Updated: 2023/05/19 09:11:13 by ryhara           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*cpy;
	char	*head;

	if (s == NULL)
		return (NULL);
	cpy = (char *)malloc(sizeof(char) * (ft_strlen(s)+ 1));
	if (cpy == NULL)
		return (NULL);
	head = cpy;
	while (*s)
	{
		*cpy = *s;
		cpy++;
		s++;
	}
	*cpy = '\0';
	return (head);
}

// #include <stdio.h>
// int	main(void)
// {
// 	char *s1 = "abcde\n";
// 	char *s2 = ft_strdup(s1);
// 	printf("s1 %p\n",s1);
// 	printf("%s\n",s1);
// 	printf("s2 %p\n",s2);
// 	printf("%s\n",s2);
// }