/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainP.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashahsaf <ashahsaf@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 15:55:35 by ashahsaf          #+#    #+#             */
/*   Updated: 2024/07/16 15:55:39 by ashahsaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_point.h"

void set_point(t_point *point)
{
    point->x = 42;
    point->y = 21;
}

int main(void)
{
    t_point point;
    set_point(&point);
    printf("point.x = %d\n", point.x);
    printf("point.y = %d\n", point.y);
    return (0);
}

