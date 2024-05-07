/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzhan <yzhan@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 16:34:54 by yzhan             #+#    #+#             */
/*   Updated: 2024/04/23 13:50:29 by yzhan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	i;
	size_t	j;

	if (!s)
		return (0);
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	if (len > (ft_strlen(s) - start))
		len = ft_strlen(s) - start;
	substr = (char *)malloc(sizeof(*s) * (len + 1));
	if (!substr)
		return (0);
	i = 0;
	j = start;
	while (i < len && j < ft_strlen(s))
	{
		substr[i] = s[j];
		i++;
		j++;
	}
	substr[i] = '\0';
	return (substr);
}
/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	char			*s = "hola";
	unsigned int	start = 0;
	size_t			len = -1;
	char			*substr;

	substr = ft_substr(s, start, len);
	printf("substr: %s\n", substr);
	//printf("substr length: %lu\n", strlen(substr));
	return (0);
}
*/
