/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dteruya <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 12:28:44 by dteruya           #+#    #+#             */
/*   Updated: 2024/10/10 10:13:31 by dteruya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *src)
{
	int	iterator;

	iterator = 1;
	while (src[iterator] != '\0')
	{
		iterator++;
	}
	return (iterator);
}

char	*ft_strdup(char *src)
{
	char	*dest;
	int		i;

	dest = (char *) malloc(ft_strlen(src) * sizeof(char));
	if (dest == NULL)
	{
		return (NULL);
	}
	i = 0;
	else
	{
		while (src[i] != '\0')
		{
			(dest[i] = src[i]);
			i++;
		}
	}
	return (dest);
}
/*
int	main(void)
{
	char	sorce[] = "";
	char	*teste;

	teste = ft_strdup(sorce);
	free(teste);
	return (0);
}*/
