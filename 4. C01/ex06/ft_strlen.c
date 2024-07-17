/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashahsaf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/30 18:24:14 by ashahsaf          #+#    #+#             */
/*   Updated: 2024/07/01 19:25:22 by ashahsaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*(str + i) != '\0')
	{
		i++;
	}
	return (i);
}

#include <stdio.h>

int		ft_strlen(char *str);

int		main(void)
{
	char *str;

	str = "Il y a 20 caracteres";
	printf("Retour (20): %d\n", ft_strlen(str));
}
