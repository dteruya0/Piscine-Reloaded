/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dteruya <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 11:45:48 by dteruya           #+#    #+#             */
/*   Updated: 2024/10/03 12:44:31 by dteruya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
int	main(void)
{
	int	w;
	int	x;
	int	y;
	int	z;

	w = 10;
	x = 3;
	ft_div_mod(w, x, &y, &z);
	printf("%d, %d", y, z);
	return (0);
}*/
