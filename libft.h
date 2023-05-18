/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryhara <ryhara@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 08:01:35 by ryhara            #+#    #+#             */
/*   Updated: 2023/05/19 08:01:35 by ryhara           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <limits.h>

size_t	ft_strlen(const char *s);



void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void 	ft_putnbr_fd(int n, int fd);
