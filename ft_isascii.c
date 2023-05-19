/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryhara <ryhara@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 15:00:20 by ryhara            #+#    #+#             */
/*   Updated: 2023/05/19 15:00:20 by ryhara           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}

// #include <stdio.h>
// int	main(void)
// {
// 	printf("%d\n",ft_isascii('a'));
// 	printf("%d\n",ft_isascii('\n'));
// 	printf("%d\n",ft_isascii(128));
// }