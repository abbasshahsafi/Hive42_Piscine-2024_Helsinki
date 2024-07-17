/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashahsaf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/30 16:38:52 by ashahsaf          #+#    #+#             */
/*   Updated: 2024/06/30 17:12:16 by ashahsaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ft(int *nbr)
{
	*nbr = 42;
}

#include <stdio.h>

void	ft_ft(int *ptr);

int		main(void)
{
	int a;
	int *ptr;

	a = 21;
	ptr = &a;
	printf("Avant (21): %d\n", a);
	ft_ft(ptr);
	printf("Apres (42): %d\n", a);
}
