/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzhan <yzhan@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 14:26:37 by yzhan             #+#    #+#             */
/*   Updated: 2024/04/22 13:31:51 by yzhan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	srcsize;
	size_t	i;

	srcsize = ft_strlen(src);
	i = 0;
	if (dstsize != 0)
	{
		while (src[i] != '\0' && i < (dstsize - 1))
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (srcsize);
}

/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	char	*src = NULL;
	char	*dst1 = NULL;
	char	*dst2 = NULL;
	size_t	d = 8;
	size_t	d_strlcpy;
	size_t	d_ft;

	printf("src: %s, length of src: %lu\n", src, strlen(src));
	d_strlcpy = strlcpy(dst1, src, d);
	printf("dst1: %s, src length: %zu\n", dst1, d_strlcpy);
	printf("dst1 length: %lu\n", strlen(dst1));

	d_ft = ft_strlcpy(dst2, src, d);
	printf("dst2: %s, src length: %zu\n", dst2, d_ft);
	printf("dst2 length: %lu\n", strlen(dst2));
	return (0);
}
*/
