/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzhan <yzhan@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 11:09:51 by yzhan             #+#    #+#             */
/*   Updated: 2024/04/17 12:02:31 by yzhan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*s;

	i = 0;
	s = b;
	while (i < len)
	{
		s[i] = c;
		i++;
	}
	return (b);
}
/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	char	str1[50] = "ssssssssssssssssss";
	char	str2[50] = "ssssssssssssssssss";
	int		c = '-';
	size_t	len = 5;

	printf("Before, str1: %s\n", str1);
	printf("Before, str2: %s\n", str2);
	//after memset;
	memset(str1 + 3, c, len);
	ft_memset(str2 + 3, c, len);
	printf("memset: %s\n", str1);
	printf("ft: %s\n", str2);
	return (0);
}
*/
