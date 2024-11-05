/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzhan <yzhan@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 13:47:04 by yzhan             #+#    #+#             */
/*   Updated: 2024/04/17 16:01:46 by yzhan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;

	if (!dst && !src)
		return (0);
	if ((size_t)dst - (size_t)src < len)
	{
		i = len - 1;
		while (i < len)
		{
			((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
			i--;
		}
	}
	else
	{
		i = 0;
		while (i < len)
		{
			((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
			i++;
		}
	}
	return (dst);
}
/*
#include <string.h>
#include <stdio.h>
int	main(void)
{
	char	src1[50] = "1234567890";
	char	src2[50] = "1234567890";
	size_t	len;
	len = 16;
	printf("src1 is %s\nsrc2 is %s\n", src1, src2);
	printf("len is %zu\n", len);
	memmove(src1 + 5, src1, len);
	printf("after memmove src1:%s\n", src1);
	ft_memmove(src2 + 5, src2, len);
	printf("af ft_memmove src2:%s\n", src2);
	return (0);
}
*/
