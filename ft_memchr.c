/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzhan <yzhan@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 10:17:59 by yzhan             #+#    #+#             */
/*   Updated: 2024/04/23 13:58:28 by yzhan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)s)[i] == (unsigned char)c)
			return ((void *)(s + i));
		i++;
	}
	return (NULL);
}
/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	char	str[] = "abcdefgh";
	int		c = 'D';
	size_t	n = 4;
	char	*m1;
	char	*m2;
	printf("str: %s\n", str);
	m1 = memchr(str, c, n);
	printf("memchr: %s\n", m1);
	m2 = ft_memchr(str, c, n);
	printf("ft_memchr: %s\n", m2);
	return (0);
}
*/
