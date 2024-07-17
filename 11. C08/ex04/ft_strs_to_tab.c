/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashahsaf <ashahsaf@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 16:20:53 by ashahsaf          #+#    #+#             */
/*   Updated: 2024/07/16 16:21:00 by ashahsaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

int	ft_str_length(char *str)
{
	int	index;

	index = 0;
	while (str[index])
		index++;
	return (index);
}

char	*ft_strdup(char *src)
{
	int		index;
	char	*dest;

	index = 0;
	dest = (char *)malloc(ft_str_length(src) * sizeof(char) + 1);
	if (!dest)
		return (NULL);
	while (src[index])
	{
		dest[index] = src[index];
		index++;
	}
	dest[index] = '\0';
	return (dest);
}

void	free_stock_str_array(struct s_stock_str *array, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		free(array[i].copy);
		i++;
	}
	free(array);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int					i;
	struct s_stock_str	*array;

	i = 0;
	array = (struct s_stock_str *)malloc((ac + 1) * sizeof(struct s_stock_str));
	if (!array)
		return (NULL);
	while (i < ac)
	{
		array[i].size = ft_str_length(av[i]);
		array[i].str = av[i];
		array[i].copy = ft_strdup(av[i]);
		if (!array[i].copy)
		{
			free_stock_str_array(array, i);
			return (NULL);
		}
		i++;
	}
	array[ac].str = 0;
	array[ac].copy = 0;
	return (array);
}
