/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryhara <ryhara@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 17:30:54 by ryhara            #+#    #+#             */
/*   Updated: 2023/05/27 15:17:27 by ryhara           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	check_digit(int n)
{
	size_t	digit;

	digit = 1;
	if (n < 0)
	{
		n /= -10;
		digit++;
	}
	else
		n /= 10;
	while (n)
	{
		n /= 10;
		digit++;
	}
	return (digit);
}

char	*ft_itoa(int n)
{
	char	*str;
	size_t	digit;
	long	num;

	num = n;
	digit = check_digit(n);
	str = (char *)malloc(sizeof(char) * (digit + 1));
	if (str == NULL)
		return (NULL);
	str[digit + 1] = '\0';
	if (n < 0)
		num *= -1;
	while (digit--)
	{
		str[digit] = (num % 10) + '0';
		num /= 10;
	}
	if (n < 0)
		str[0] = '-';
	return (str);
}

// #include<stdio.h>
// int main(void)
// {
// 	char *s;
// 	s = ft_itoa(INT_MIN);
// 	printf("%s\n",s);
// }