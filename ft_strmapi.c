/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzhan <yzhan@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 12:26:02 by yzhan             #+#    #+#             */
/*   Updated: 2024/04/24 15:43:39 by yzhan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		len;
	int		i;
	char	*new_str;

	len = ft_strlen(s);
	new_str = (char *)malloc(sizeof(char) * (len + 1));
	if (!new_str)
		return (NULL);
	i = 0;
	while (s[i] != 0)
	{
		new_str[i] = f(i, s[i]);
		i++;
	}
	new_str[i] = 0;
	return (new_str);
}
/*
char	f(unsigned int index, char c)
{
	if (index == 0)
		c = ft_toupper(c);
	else
		c = ft_tolower(c);
	return (c);
}
#include <stdio.h>
int	main(void)
{
	char	*s = "sffADkh1jfiA";
	printf("%s\n", s);
	printf("%s\n", ft_strmapi(s, f));
	return (0);
}
*/
