/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dteruya <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 12:48:54 by dteruya           #+#    #+#             */
/*   Updated: 2024/10/07 16:23:34 by dteruya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	i;

	i = nb - 1;
	if (nb == 0 || nb == 1)
	{
		return (1);
	}
	else if (i > 0)
	{
		while (i != 1)
		{
			nb = nb * i;
			i--;
		}
		return (nb);
	}
	else
	{
		return (0);
	}
}
/*
int	main(void)
{
	printf("%d", ft_iterative_factorial(0));
	return(0);
}*/
