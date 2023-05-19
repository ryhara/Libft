/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryhara <ryhara@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 10:41:37 by ryhara            #+#    #+#             */
/*   Updated: 2023/05/19 10:41:37 by ryhara           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	check_overflow(long num, const char *nptr, int sign)
{
	if (sign == 1)
	{
		if ((num == 922337203685477580 && (*nptr - '0') > 7)
			|| num >= 922337203685477581)
			return (-1);
	}
	if (sign == -1)
	{
		if ((num == 922337203685477580 && (*nptr - '0') > 8)
			|| num >= 922337203685477581)
			return (0);
	}
	return (1);
}

int	ft_atoi(const char *nptr)
{
	long	num;
	int		sign;
	int		flag;

	num = 0;
	sign = 1;
	while ((*nptr >= 9 && *nptr <= 13) || *nptr == 32)
		nptr++;
	if (*nptr == '-' || *nptr == '+')
	{
		if (*nptr == '-')
			sign = -1;
		nptr++;
	}
	while (*nptr >= '0' && *nptr <= '9')
	{
		flag = check_overflow(num, nptr, sign);
		if (flag != 1)
			return (flag);
		num = num * 10 + (*nptr - '0');
		nptr++;
	}
	return (num * sign);
}

// #include <stdlib.h>
// #include <stdio.h>
// int main(void)
// {
// 	//LONG_MAX 9223372036854775807
// 	printf("%d\n",atoi(" \n 	 9223372036854775808."));
// 	printf("%d\n",atoi("-2147483648"));
// 	printf("ft_atoi\n");
// 	printf("%d\n",ft_atoi("  \n	 9223372036854775808."));
// 	printf("%d\n",ft_atoi("-2147483648"));
// }