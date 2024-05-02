/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzhan <yzhan@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 16:27:01 by yzhan             #+#    #+#             */
/*   Updated: 2024/04/22 13:35:14 by yzhan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	n_len;
	char	*h;
	char	*f;

	n_len = ft_strlen(needle);
	i = 0;
	if (needle[i] == 0)
		return ((char *)haystack);
	while (*haystack != 0 && (i + n_len) <= len)
	{
		h = (char *)haystack;
		f = (char *)needle;
		while (*h == *f && *f != 0)
		{
			h++;
			f++;
		}
		if (*f == 0)
			return ((char *)haystack);
		haystack++;
		i++;
	}
	return (NULL);
}

/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	str1[20] = "";
	char	str2[20] = "";
	char	find[20] = "1";
	size_t	len = 1;

	char	*result1 = strnstr(str1, find, len);
	printf("strnstr: %s\n", result1);
	char	*result2 = ft_strnstr(str2, find, len);
	printf("ft: %s\n", result2);
	return (0);
}
*/
