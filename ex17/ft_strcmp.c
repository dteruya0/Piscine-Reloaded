/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dteruya <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 12:01:56 by dteruya           #+#    #+#             */
/*   Updated: 2024/10/07 16:18:37 by dteruya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	x;

	x = 0;
	i = 0;
	if (s1[i] != '\0' || s2[i] != '\0')
	{
		while (x == 0)
		{
			x = s1[i] - s2[i];
			i++;
		}
		return (x);
	}
	else
	{
		return (0);
	}
}
/*
int	main(void)
{
	char	banana[] = "aaaaaaab";
	char	apple[] = "aaaaaaac";
	printf("%d", ft_strcmp(banana, apple));
	return(0);
}*/
