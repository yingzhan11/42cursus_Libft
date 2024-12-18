/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzhan <yzhan@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 14:38:14 by yzhan             #+#    #+#             */
/*   Updated: 2024/04/16 15:05:41 by yzhan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != 0)
		i++;
	return (i);
}
/*
#include <string.h>
#include <stdio.h>
int	main(void)
{
	char	*s = "hel\0dd";
	printf("strlen: %zu\n", strlen(s));
	printf("ft: %zu\n", ft_strlen(s));
	return (0);
}
*/
