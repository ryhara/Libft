/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryhara <ryhara@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 14:54:40 by ryhara            #+#    #+#             */
/*   Updated: 2023/05/19 14:54:40 by ryhara           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if(ft_isdigit(c) || ft_isalpha(c))
		return (1);
	else
		return (0);
}


// #include <stdio.h>
// int	main(void)
// {
// 	printf("%d\n",ft_isalnum('a'));
// 	printf("%d\n",ft_isalnum('0'));
// 	printf("%d\n",ft_isalnum('-'));
// }