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

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size);

int		main(void)
{
	int tab[20];
	int tab2[20];
	int i;

	tab[0] = 15;
	tab[1] = 7;
	tab[2] = 4;
	tab[3] = 19;
	tab[4] = 20;
	tab[5] = 8;
	tab[6] = 843;
	tab[7] = 843;
	tab[8] = 0;
	tab[9] = 69;
	tab[10] = 41;
	tab[11] = 1856153;
	tab[12] = -481;
	tab[13] = 184;
	tab[14] = 1;
	tab[15] = 987;
	tab[16] = 11;
	tab[17] = 895;
	tab[18] = 147;
	tab[19] = 843;
	i = 0;
	while (i < 20)
	{
		tab2[i] = tab[i];
		i++;
	}
	ft_sort_int_tab(tab, 20);
	i = 0;
	while (i < 20)
	{
		printf("%d: %d\n", i, tab[i]); 
		i++;
	}
}
