/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dteruya <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 14:37:49 by dteruya           #+#    #+#             */
/*   Updated: 2024/10/10 12:01:05 by dteruya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*result;
	int	i;

	i = 0;
	result = (int *) malloc((max - min) * sizeof(int));
	if (result == NULL)
	{
		return (NULL);
	}
	else if (min < max)
	{
		while ((min + i) < max)
		{
			result[i] = min + i;
			i++;
		}
		return (result);
	}
	return (NULL);
}
/*
int	main(void)
{
	int	*array;
	int	index;
	int	max;
	int	min;

	min = 30;
	max = 10;
	index = 0;
	array = ft_range(min, max);
	while (index != (max - min))
	{
		printf("%d", array[index]);
		printf("%c", '\n');
		index++;
	}
	free(array);
	return (0);
}*/
