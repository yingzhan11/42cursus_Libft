/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzhan <yzhan@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 15:30:34 by yzhan             #+#    #+#             */
/*   Updated: 2024/04/23 14:30:16 by yzhan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	chr;
	int		i;

	chr = c;
	i = ft_strlen(s);
	while (i > 0 && s[i] != chr)
		i--;
	if (s[i] == chr)
		return ((char *)(s + i));
	return (NULL);
}
/*
 #include <string.h>
 #include <stdio.h>

 int    main(void)
 {
     char    *s = "test hi hello";
     int     c = 't';

     printf("ft: %s\n", ft_strrchr(s, c + 256));
     printf("strrchr: %s\n", strrchr(s, c + 256));
     
     return (0);
 }
 */
