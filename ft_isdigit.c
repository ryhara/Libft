/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryhara <ryhara@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 14:28:56 by ryhara            #+#    #+#             */
/*   Updated: 2023/05/19 14:28:56 by ryhara           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

// #include <stdio.h>
// int	main(void)
// {
// 	printf("%d\n",ft_isdigit('a'));
// 	printf("%d\n",ft_isdigit('0'));
// }