/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashahsaf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/30 18:28:43 by ashahsaf          #+#    #+#             */
/*   Updated: 2024/06/30 18:29:06 by ashahsaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	tmp;
	int	i;
	int	x;

	i = 0;
	while (i < size)
	{
		x = 0;
		tmp = 0;
		while (x < (size - 1))
		{
			if (tab[x] > tab[x + 1])
			{
				tmp = tab[x];
				tab[x] = tab[x + 1];
				tab[x + 1] = tmp;
			}
			x++;
		}
		i++;
	}
}
