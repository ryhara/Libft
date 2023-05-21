/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryhara <ryhara@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 08:18:59 by ryhara            #+#    #+#             */
/*   Updated: 2023/05/19 08:18:59 by ryhara           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		if (n < -10)
			ft_putnbr_fd((n / -10), fd);
		n = n % 10 * -1;
	}
	if (n >= 10)
		ft_putnbr_fd(n / 10, fd);
	ft_putchar_fd((n % 10 + '0'), fd);
}

// #include<stdio.h>
// int	main(void)
// {
// 	int	fd;

// 	fd = 1;
// 	ft_putnbr_fd(INT_MAX,1);
// 	ft_putchar_fd('\n',1);
// 	ft_putnbr_fd(INT_MIN,1);
// 	ft_putchar_fd('\n',1);
// 	ft_putnbr_fd(-5,1);
// 	ft_putchar_fd('\n',1);
// }