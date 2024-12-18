/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzhan <yzhan@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 16:44:13 by yzhan             #+#    #+#             */
/*   Updated: 2024/04/24 16:59:10 by yzhan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	c;

	if (n == -2147483648)
		write(fd, "-2147483648", 11);
	else if (n < 0)
	{
		write(fd, "-", 1);
		ft_putnbr_fd(-n, fd);
	}
	else if (n > 9)
	{
		ft_putnbr_fd((n / 10), fd);
		c = n % 10 + '0';
		write(fd, &c, 1);
	}
	else if (n <= 9)
	{
		c = n + '0';
		write(fd, &c, 1);
	}
}
/*
#include <stdio.h>
int	main(void)
{
	int n1 = 2147483647;
	int n2 = -2147483648;
	int n3 = 2;
	int	fd = 0;
	ft_putnbr_fd(n1, fd);
	write(1, "\n", 1);
	ft_putnbr_fd(n2, fd);
	write(1, "\n", 1);
	ft_putnbr_fd(n3, fd);
	write(1, "\n", 1);
	return (0);
}
*/
