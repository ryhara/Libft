/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryhara <ryhara@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 17:30:54 by ryhara            #+#    #+#             */
/*   Updated: 2023/05/21 17:44:51 by ryhara           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	check_digit(int n)
{
	int	digit;
	if (n < 0)
	{
		n /= -10;
		digit++;
	}
	else
		n /= 10;
	digit = 1;
	while (n)
		n /= 10;
	return (digit);
}

char	*ft_itoa(int n)
{
	char	*str;
	int	digit;
	int	i;

	i = 0;
	digit = check_digit(n);
	if (n < 0)
	str = (char *)malloc(sizeof(char) * (digit + 1));
	while (digit--)
	{
		while(i < digit)
		{
			str[i] = (n / 10) 
		}
	}

}