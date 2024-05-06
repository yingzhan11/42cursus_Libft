/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzhan <yzhan@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 12:32:00 by yzhan             #+#    #+#             */
/*   Updated: 2024/05/01 10:23:32 by yzhan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;

	if (!dst && !src)
		return (NULL);
	i = 0;
	while (i < n)
	{
		((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dst);
}

/*
#include <string.h>
#include <stdio.h>
int	main(void)
{
	char	*dst1 = "";
	char	*dst2 = "";
	char	*src = "22";
	size_t	n;

	n = 2;

	printf("dst1 is %s\ndst2 is %s\nsrc is %s\n", dst1, dst2, src);
	printf("copy %zu chars from src to dst\n", n);
	memcpy(NULL, src, n);
	printf("after memcpy:\ndst1 is %s\nsrc is %s\n", dst1, src);
	ft_memcpy(NULL, src, n);
	printf("after ft_memcpy: \ndst2 is %s\nsrc is %s\n", dst2, src);
	return (0);
}
*/
