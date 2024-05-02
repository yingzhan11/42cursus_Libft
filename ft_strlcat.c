/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzhan <yzhan@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 15:27:10 by yzhan             #+#    #+#             */
/*   Updated: 2024/04/19 16:23:24 by yzhan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	srcsize;
	size_t	i;
	size_t	j;

	srcsize = ft_strlen(src);
	i = ft_strlen(dst);
	j = 0;
	if (dstsize <= i)
		return (dstsize + srcsize);
	while (src[j] != '\0' && j < (dstsize - i - 1))
	{
		dst[i + j] = src[j];
		j++;
	}
	dst[i + j] = '\0';
	return (i + srcsize);
}
/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	char	src[20] = "12345";
	char	dst1[20] = "00";
	char	dst2[20] = "00";
	size_t	dstsize = 5;
	size_t	d_strlcat;
	size_t	d_ft;

	printf("src: %s, dstsize: %zu\n", src, dstsize);
	printf("before strlcat, dst1: %s\n", dst1);
	d_strlcat = strlcat(dst1, src, dstsize);
	printf("dst1: %s, dst+src length: %zu\n", dst1, d_strlcat);
	
	printf("before ft_strlcat, dst2: %s\n", dst2);
	d_ft = ft_strlcat(dst2, src, dstsize);
	printf("dst2: %s, dst+src length: %zu\n", dst2, d_ft);
	return(0);
}
*/
