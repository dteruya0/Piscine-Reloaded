/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dteruya <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 12:48:54 by dteruya           #+#    #+#             */
/*   Updated: 2024/10/03 16:35:37 by dteruya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	i;

	if (i > 0)
	{
		i = nb - 1;
		while (i > 0)
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
	printf("%d", ft_iterative_factorial(1));
	return(0);
}*/
