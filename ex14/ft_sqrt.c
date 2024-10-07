/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dteruya <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 08:24:12 by dteruya           #+#    #+#             */
/*   Updated: 2024/10/07 16:25:16 by dteruya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	x;

	if (nb < 0)
	{
		return (0);
	}
	x = 0;
	while (x * x <= nb)
	{
		if (x * x == nb)
		{
			return (x);
		}
		x++;
	}
	return (0);
}
/*
int	main(void)
{
	printf("%d", ft_sqrt(133));
	return(0);
}*/
