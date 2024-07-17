/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashahsaf <ashahsaf@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 22:39:35 by ashahsaf          #+#    #+#             */
/*   Updated: 2024/07/16 22:39:41 by ashahsaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_boolean.h"
#include <stdio.h>

int main(int argc, char **argv)
{
	(void)argv;
	if (ft_is_even(argc - 1) == TRUE)
		write(1, EVEN_MSG, sizeof(EVEN_MSG) - 1);
	else
		write(1, ODD_MSG, sizeof(ODD_MSG) - 1);
	return (SUCCESS);
}

