/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dteruya <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 11:26:34 by dteruya           #+#    #+#             */
/*   Updated: 2024/10/08 13:11:05 by dteruya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_print_params(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
		if (str[i] == '\0')
		{
			ft_putchar('\n');
		}
	}
}

int	main(int argc, char *argv[])
{
	int	value;

	value = 1;
	while (argv[value])
	{
		ft_print_params(argv[value]);
		value++;
	}
	return (0);
}
