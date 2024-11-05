/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzhan <yzhan@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 12:44:24 by yzhan             #+#    #+#             */
/*   Updated: 2024/04/19 14:16:37 by yzhan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	if (n == 0 || (!s1 && !s2))
		return (0);
	i = 0;
	while (i < n)
	{
		if (((unsigned char *)s1)[i] != ((unsigned char *)s2)[i])
			return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	char	s1[10] = "1234\200";
	char	s2[10] = "1234\0";
	int		n = 5;
	printf("s1: %s\ns2: %s\nn: %d\n", s1, s2, n);
	printf("memcmp: %d\n", memcmp(s1, s2, n));
	printf("ft_memcmp: %d\n", ft_memcmp(s1, s2, n));
	return (0);
}
*/
