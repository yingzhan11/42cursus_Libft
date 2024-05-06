/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzhan <yzhan@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 12:03:13 by yzhan             #+#    #+#             */
/*   Updated: 2024/04/22 16:53:16 by yzhan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}
/*
#include <strings.h>
#include <stdio.h>
int	main(void)
{
	char	str1[43];
	char	str2[43];
	size_t	n;

	n = 42;
	str1[42] = 'A';
	str2[42] = 'A';
	//printf("str1: %s\n", str1);
	//printf("str2: %s\n", str2);
	//after bzero;
	bzero(str1, n);
	printf("bzero: %s\n", str1);
	ft_bzero(str2, n);
	printf("ft: %s\n", str2);
    printf("%lu, %lu\n", strlen(str1), strlen(str2));
	return (0);
}
*/
