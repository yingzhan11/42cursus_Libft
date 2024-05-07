/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzhan <yzhan@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 14:31:11 by yzhan             #+#    #+#             */
/*   Updated: 2024/04/23 15:51:05 by yzhan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	char	*trim_s;

	if (!s1 || !set)
		return ((char *)s1);
	i = 0;
	while (s1[i] != 0 && ft_strchr(set, s1[i]) != NULL)
		i++;
	j = ft_strlen(s1) - 1;
	while (j > 0 && ft_strchr(set, s1[j]) != NULL)
		j--;
	trim_s = ft_substr(s1, i, (j - i + 1));
	return (trim_s);
}
/*
#include <stdio.h>
int main(void)
{
	char	*s1 = "lorem \n ipsum \t dolor \n sit \t amet";
	char	*set = " ";
	char	*trim;

	trim = ft_strtrim(s1, set);
	printf("%s\n", trim);
	return (0);
}
*/
