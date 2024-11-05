/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzhan <yzhan@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 10:20:54 by yzhan             #+#    #+#             */
/*   Updated: 2024/04/22 16:55:10 by yzhan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*p;
	size_t	total;

	total = count * size;
	if (count > 0 && size > 0 && ((total / count) != size))
		return (NULL);
	p = (void *)malloc(total);
	if (!p)
		return (NULL);
	ft_bzero(p, total);
	return (p);
}
/*
#include <stdio.h>
int	main(void)
{
	size_t count =25;
	size_t i;
	
	int* ca = (int*)calloc(count, sizeof(int));
	if (!ca)
		return (1);
	i = 0;
	while (i < count)
	{
		printf("%d", ca[i]);
		i++;
	}
	printf("\n");
	int* ft = (int*)ft_calloc(count, sizeof(int));
	if (!ft)
		return (1);
	i = 0;
	while (i < count)
	{
		printf("%d", ft[i]);
		i++;
	}
	printf("\n");
	free (ca);
	free (ft);
}
*/
