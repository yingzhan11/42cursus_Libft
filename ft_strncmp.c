/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzhan <yzhan@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 16:05:22 by yzhan             #+#    #+#             */
/*   Updated: 2024/04/22 13:34:35 by yzhan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	if (n == 0)
		return (0);
	i = 0;
	while (s1[i] == s2[i] && s1[i] != 0 && i < n)
	{
		if (i < (n - 1))
			i++;
		else
			return (0);
	}
	return ((unsigned char)(s1[i]) - (unsigned char)(s2[i]));
}
/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	char	*s1 = "1234";
	char	*s2 = "1235";
	size_t	n = 3;
	printf("strncmp: %d\n", strncmp(s1, s2, n));
	printf("ft: %d\n", ft_strncmp(s1, s2, n));
	return (0);
}
*/
