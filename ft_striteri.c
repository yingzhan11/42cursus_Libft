/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzhan <yzhan@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 15:43:59 by yzhan             #+#    #+#             */
/*   Updated: 2024/04/24 17:21:37 by yzhan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int		i;

	i = 0;
	while (s[i] != 0)
	{
		f(i, s + i);
		i++;
	}
}
/*
#include <stdio.h>
void	f(unsigned int index, char *s)
{
	printf("%u, %c\n", index, *s);	
}
int	main(void)
{
	char	*s = "sfjhHUYsj";
	
	ft_striteri(s, f);
	return (0);
}
*/
