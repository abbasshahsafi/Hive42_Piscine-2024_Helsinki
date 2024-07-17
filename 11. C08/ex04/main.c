/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashahsaf <ashahsaf@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 16:28:34 by ashahsaf          #+#    #+#             */
/*   Updated: 2024/07/16 16:28:46 by ashahsaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "ft_stock_str.h"

// Prototype for ft_strs_to_tab function
struct s_stock_str *ft_strs_to_tab(int ac, char **av);

void print_stock_str(struct s_stock_str *stock)
{
    while (stock->str)
    {
        printf("Size: %d\n", stock->size);
        printf("Str: %s\n", stock->str);
        printf("Copy: %s\n", stock->copy);
        stock++;
    }
}

int main(int argc, char **argv)
{
    struct s_stock_str *stock_array;

    stock_array = ft_strs_to_tab(argc - 1, argv + 1);
    if (!stock_array)
    {
        printf("Error: Memory allocation failed\n");
        return 1;
    }
    print_stock_str(stock_array);
    // Free allocated memory
    for (int i = 0; i < argc - 1; i++)
        free(stock_array[i].copy);
    free(stock_array);
    return 0;
}
