/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dteruya <dteruya@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 10:53:04 by dteruya           #+#    #+#             */
/*   Updated: 2024/10/03 16:18:27 by dteruya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

/*
{
	write(1, &c, 1);
}
*/
void	ft_print_numbers(void)
{
	char	x;

	x = '0';
	while (x <= '9')
	{
		ft_putchar(x);
		x++;
	}
}
/*
int	main(void)
{
	ft_print_numbers();
	return (0);
}*/
